// CP<EMTAROP SE< MPCAP

#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

byte pitch;

void handleNoteOn(byte channel, byte pitch, byte velocity)
{

}

void handleNoteOff(byte channel, byte pitch, byte velocity)
{

}



void setup() {
  // put your setup code here, to run once:
//byte channel;

//byte velocity;

  MIDI.setHandleNoteOn(handleNoteOn);  // Put only the name of the function

  // Do the same for NoteOffs
  MIDI.setHandleNoteOff(handleNoteOff);

  // Initiate MIDI communications, listen to all channels
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.begin(115200);
   MIDI.read();
  byte (MIDI.getData1()) == pitch;
}

void loop() {
  MIDI.read();
  {
    
    Serial.println(pitch);
  delay(0.01);}

  }
