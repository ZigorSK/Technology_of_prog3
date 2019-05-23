#include "ball.h"

ball::ball()
{
	r = new double;
	*r = 0;
	ifstream fp("ball.txt", ios::in);
	if (fp)
	{
		fp >> *r;
		fp.close();
	}
	else
	{
		cout << "Ошибка открытия файла!!!" << endl;
		system("pause");
	}

}

ball::ball(double data)
{
	r = new double;
	*r = data;
}

ball::ball(const ball & A)
{
	r = new double;
	*r = *A.r;
}

ball::~ball()
{
	if (!r)
		delete r;

	//Запись в файл
	ofstream fp("ball.txt", ios::out);
	if (fp)
	{
		fp << *r;
		fp.close();
	}
	else
	{
		cout << "Ошибка открытия файла!!!" << endl;
		system("pause");
	}
}

void ball::set_r(double v)
{
	*r = v;
}

double ball::get_r()
{
	return *r;
}

double ball::finde_vol()
{
	set_vol(4 * (*r)*(*r)*(*r)* PI / 3);;
	cout << "Сторона:" << get_r() << endl;

	cout << "Обьём:" << get_vol() << endl;

	return get_vol();
}

void ball::edit()
{
	double d;
	cout << "Введите новый радиус:";
	cin >> d;
	*r = d;
	cout << endl;
}

