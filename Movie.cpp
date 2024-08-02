#include "Movie.h"
#include <iostream>

void Movie::play()
{
	cout << director << "'s" << year << " " << genre << " film " << name << ": " << plot << ". " << endl;
}