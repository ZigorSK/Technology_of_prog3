#pragma once
#ifndef _tetr_H_

#include"volume.h"
#include<cmath>
#include<iostream>
#include<fstream>

using namespace std;

#define _tetr_H_

class tetr:public volume
{
	double *a;//сторона тетраэдера

public:

	tetr();
	tetr(double data);
	tetr(const tetr &A);
	~tetr();

	double get_a();
	void set_a(double data);

	double finde_vol();
	void edit();
};
#endif