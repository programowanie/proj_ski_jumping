#pragma once

#include "Hill.h"
#include <string>
#include <vector>

using namespace std;

//umiejtnosci zawodnika
struct abilities
{
	double issue_force, silhouette, landing;
};

//niedoskonalosci zawodnika
struct shortages
{
	double fall_chance, exposure_to_wind;
};

//skoczek
class Jumper
{
	static vector <string> names;

	string _name;
	double strength, form;
	int _notes, _jump_length;
	bool _death;
	abilities gain;  //deklaracja zmiennej zyskow
	shortages loss;  //deklaracja zmiennej wad

	static void init();


public:
	Jumper();	//inicjacja skoczka
	string name();
	bool jump();
	bool flight(int h_profile, wind h_wind, int h_k);
	bool land(int h_danger);
	bool death();
	int notes();
	int jump_length();
};