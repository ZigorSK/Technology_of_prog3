#pragma once
#ifndef _piramid_H_

#include"volume.h"
#include<cmath>
#include<iostream>
#include<fstream>

using namespace std;

#define _piramid_H_

class piramid :public volume
{
	double *s0;
	double *h;

public:

	piramid();
	piramid(double data_s, double data_h);
	piramid(const piramid &A);
	~piramid();

	void set_s0(double v);
	double get_s0();
	void set_h(double v);
	double get_h();

	double finde_vol();
	void edit();

};
#endif