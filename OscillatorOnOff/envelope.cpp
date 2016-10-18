#include <QDebug>
#include <math.h>
#include "envelope.h"

//konstante als untere Grenze
const float MIN_GAIN_DB = -180;
const float MIN_GAIN= pow(10,MIN_GAIN_DB/20);

inline float db2gain(float db){
    return pow(10,db/20);
}
inline float gain2db(float gain){
    return 20*log(gain);
}

Envelope::Envelope()
    : gain(0), sampleRate(0),state(OFF),releaseSeconds(0),attackSeconds(0)
{
    // zu Testzwecken 1 Sekunde Releasezeit
    setReleaseSeconds(1);
    setAttackSeconds(1);
}
void Envelope::setSampleRate(float sampleRate){
    this->sampleRate = sampleRate;
}
void Envelope::setReleaseSeconds(float seconds){
    this->releaseSeconds = seconds;
}
void Envelope::setAttackSeconds(float seconds){
    this->attackSeconds = seconds;
}

void Envelope::on(){
    setState(ATTACK);
    //gain = 1;
}
void Envelope::off(){
    setState(RELEASE);
}

void Envelope::setState(State state){
    this->state = state;
    if(state == OFF){
        gain = 0;
        qDebug()<<"OFF";
    }
    if(state == ON){
        gain = gainFactor = 1;
        qDebug()<<"ON";
    }
    if(state == RELEASE){
        float gainFactor_dB = fabs(0 -MIN_GAIN_DB)/(sampleRate * releaseSeconds);
        gainFactor = 1/db2gain(gainFactor_dB);
    }
    if(state == ATTACK){
        float gainFactor_dB = fabs(0 -MIN_GAIN_DB)/(sampleRate * attackSeconds);
        gainFactor = db2gain(gainFactor_dB);
        gain= MIN_GAIN; //gain hätte sonst den Wert 0
    }
}

float Envelope::process(float input){
    gain *=gainFactor;
    float output=  gain * input;

    if(gain < MIN_GAIN && state == RELEASE){
        setState(OFF);
    }
    if(gain >1 && state == ATTACK){
        setState(ON);
    }
    return output;
}
