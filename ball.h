#pragma once
#ifndef _ball_H_

#include"volume.h"
#include<iostream>
#include<fstream>

const long double PI = 3.141592653589793238462643383279502884;

using namespace std;

#define _ball_H_

class ball :public volume
{
	double *r;


public:

	ball();

	ball(double data);
	ball(const ball &A);
	~ball();

	void set_r(double v);
	double get_r();


	double finde_vol();
	void edit();
};
#endif