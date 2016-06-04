#include "Jumper.h"
#include "Hill.h"
#include <stdlib.h>
#include <fstream>
#include <iterator>
#include <math.h>
#include <string>

using namespace std;

double randomValueHill()
{
	return ((double) rand() / (RAND_MAX));
}

//funkcja inicjujaca skocznie
Hill::Hill()
{
	k = rand() % 60 + 240;
	profile = randomValueHill();
	danger_status = randomValueHill();
	_wind = { randomValueHill(), randomValueHill() * 3.14 };
}

int Hill::h_size() 
{
	return k;
}

double Hill::h_profile() 
{ 
	return profile; 
}

double Hill::h_danger() 
{ 
	return danger_status; 
}

wind Hill::change_wind()
{
	_wind.w_strength = randomValueHill() * _wind.w_strength + randomValueHill() * (1 - _wind.w_strength);
	_wind.w_direction = _wind.w_direction + (randomValueHill() - 0.5);

	return _wind;
}