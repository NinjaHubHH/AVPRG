#ifndef OSCILLATOR_H
#define OSCILLATOR_H

class Sinus{
public:
    Sinus();
    ~Sinus();
    float getValue();
    void setAmplitude(float amplitude);
private:
    int index;
    float amplitude;
};

#endif
