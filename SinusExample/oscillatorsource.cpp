#include "oscillatorsource.h"

OscillatorSource::OscillatorSource()
{
    audioFormat.setCodec("audio/pcm");
    audioFormat.setByteOrder(QAudioFormat::LittleEndian);
    audioFormat.setChannelCount(2);
    audioFormat.setSampleSize(32);
    audioFormat.setSampleType(QAudioFormat::Float);
    audioFormat.setSampleRate(44100);
}


void OscillatorSource::start(){
}
const QAudioFormat& OscillatorSource::format() const{
    return audioFormat;
}

qint64 OscillatorSource::read(float** buffer, qint64 numFrames){
    // get audio data for left channel
    for(int i = 0; i < numFrames; i++){
        buffer[0][i] = sinus.getValue();
    }
    // copy to other channels
    for(int c = 0; c < audioFormat.channelCount(); c++){
        for(int i = 0; i < numFrames; i++){
            buffer[c][i] = buffer[c][i];
        }
    }
    return numFrames;
}
void OscillatorSource::stop(){}
void OscillatorSource::setAmplitude(float amplitude){
    sinus.setAmplitude(amplitude);
}
