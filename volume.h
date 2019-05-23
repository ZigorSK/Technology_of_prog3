#pragma once
#ifndef _volume_H_

#define _volume_H_

class volume
{
	double *vol;
public:
	volume();
	volume(double v);
	volume(const volume &a);
	virtual ~volume();//виртуальный деструктор

	void set_vol(double v);
	double get_vol();

	virtual double finde_vol() = 0;// чисто виртуальная функция нахождения обьёма

	virtual void edit() = 0;//чисто виртуальная функция редактирования 

};

#endif