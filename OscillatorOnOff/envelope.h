#ifndef ENVELOPE_H
#define ENVELOPE_H


class Envelope
{
public:
    enum State{OFF,ON,RELEASE,ATTACK};
    Envelope();
    void setSampleRate(float sampleRate);
    float process(float input);
    void on();
    void off();
    void setReleaseSeconds(float seconds);
    void setAttackSeconds(float seconds);
private:
    void setState(State state);
private:
    float sampleRate;
    float gain;
    float releaseSeconds;
    float attackSeconds;
    State state;
    float gainFactor;
};

#endif // ENVELOPE_H
