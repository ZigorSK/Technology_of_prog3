#pragma once
#ifndef _parall_H_

#include"volume.h"
#include<iostream>
#include<fstream>

using namespace std;
#define _parall_H_

class parall : public volume
{
	double *s0;//площадь основания
	double *h;//высота
public:
	parall();
	parall(double S0, double H);
	parall(const parall &A);
	~parall();


	void set_s0(double v);
	double get_s0();
	void set_h(double v);
	double get_h();

	double finde_vol();
	void edit();
};

#endif