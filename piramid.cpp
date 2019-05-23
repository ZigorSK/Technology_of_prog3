#include "piramid.h"

piramid::piramid()
{
	s0 = new double;
	h = new double;
	*s0 = *h = 0;
	//ввод из файла
	ifstream fp("piramid.txt", ios::in);
	if (fp)
	{
		fp >> *s0 >> *h;
		fp.close();
	}
	else
	{
		cout << "Ошибка открытия файла!!!" << endl;
		system("pause");
	}

}

piramid::piramid(double data_s, double data_h)
{
	s0 = new double;
	h = new double;
	*s0 = data_s;
	*h = data_h;
}

piramid::piramid(const piramid & A)
{
	s0 = new double;
	h = new double;
	*s0 = *A.s0;
	*h = *A.h;
}

piramid::~piramid()
{
	if (!s0)
		delete s0;
	if (!h)
		delete h;

	//Запись в файл
	ofstream fp("piramid.txt", ios::out);
	if (fp)
	{
		fp << *s0 <<" " <<*h;
		fp.close();
	}
	else
	{
		cout << "Ошибка открытия файла!!!" << endl;
		system("pause");
	}
}

void piramid::set_s0(double v)
{
	*s0 = v;
}

double piramid::get_s0()
{
	return *s0;
}

void piramid::set_h(double v)
{
	*h = v;
}

double piramid::get_h()
{
	return *h;
}

double piramid::finde_vol()
{
	set_vol((*s0)*(*h)/3);

	cout << "площадь основания:" << get_s0() << endl;
	cout << "Высота:" << get_h() << endl;
	cout << "Обьём:" << get_vol() << endl;

	return(get_vol());
}

void piramid::edit()
{
	double d;
	cout << "Введите новую площать основания";
	cin >> d;
	*s0 = d;
	cout << endl;

	cout << "Введите новую высоту";
	cin >> d;
	*h = d;
	cout << endl;
}

