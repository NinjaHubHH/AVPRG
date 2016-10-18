#include <QDebug>
#include <QThread>
#include "midiinput.h"
#include "midioutput.h"

using namespace drumstick::rt;

int main(int argc, char *argv[])
{
   //Liste aller MIDI-Output Connections anzeigen
    MIDIOutput midiOutput;
    QStringList outputConnections = midiOutput.connections(true);
    qDebug()<< "MIDI Output Connections:";
    for (int i = 0; i < outputConnections.size(); i++){
        qDebug()<< outputConnections.at(i);
    }
   midiOutput.open("Microsoft GS Wavetable Synth");
   midiOutput.sendNoteOn(0,64,127);
   QThread:: sleep(1);
   midiOutput.sendNoteOff(0,64,0);
   return 0;
}
