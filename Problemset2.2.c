#include <stdio.h>
#include <math.h>


int main(){

int midi_note = 21;
float frequency = 440 * (pow(2, (midi_note-69)/12));

printf("MIDI Note: %d Frequency: %f\n", midi_note, frequency);


}

//Project Name: Problem Set 2.2
//Submitted by: Gianni Leone
//For Course: Audio Programing In C
//Due Date: 10/27/19
//Files included: N/A
//Purpose: Practice
//Build and Run commands
//Caveats, if any
//Acknowledgement, if any