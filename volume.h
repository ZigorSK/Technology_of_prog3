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
	virtual ~volume();//����������� ����������

	void set_vol(double v);
	double get_vol();

	virtual double finde_vol() = 0;// ����� ����������� ������� ���������� ������

	virtual void edit() = 0;//����� ����������� ������� �������������� 

};

#endif