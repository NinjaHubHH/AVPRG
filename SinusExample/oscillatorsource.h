#ifndef OSCILLATORSOURCE_H
#define OSCILLATORSOURCE_H

#include "audiosource.h"
#include "sinus.h"

class OscillatorSource: public AudioSource
{
public:
    OscillatorSource();
    virtual const QAudioFormat& format() const;
    virtual qint64 read(float** buffer, qint64 numFrames);
    virtual void start();
    virtual void stop();
    void setAmplitude(float amplitude);
private:
    QAudioFormat audioFormat;
    Sinus sinus;
};

#endif // OSCILLATORSOURCE_H
