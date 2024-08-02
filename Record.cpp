#include "Record.h"

void Record::play(string& artist)
{
	cout << artist << ": track 1: " << tracks[0];
	cout << artist << ": track 2: " << tracks[1];
	cout << artist << ": track 3: " << tracks[2];
}