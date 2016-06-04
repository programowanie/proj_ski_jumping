#pragma once

#include <string>
#include <vector>

using namespace std;

//struktura wiatru
struct wind
{
	double w_strength, w_direction;
};

class Hill
{
	int k;
	double profile, danger_status;
	wind _wind;  //deklaracja zmiennej wiatru

public:
	Hill();  //inicjajca skoczni
	wind change_wind();
	int h_size();
	double h_profile();
	double h_danger(); 
};