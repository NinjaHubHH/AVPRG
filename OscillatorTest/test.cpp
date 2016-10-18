#include "oscillator.h"

#include <qdebug.h>


int main(int argc, char *argv[]){
    Oscillator oscillator;
    oscillator.setFrequency(1000);
    oscillator.setType(Oscillator::SAW);
    oscillator.initialize(44100);

    for(int i = 0; i < 20000; i++){
        qDebug()  << oscillator.getValue();
    }
}
