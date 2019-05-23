#include "tetr.h"

tetr::tetr()
{
	a = new double;
	*a = 0;
	//���� �� �����
	ifstream fp("tetr.txt", ios::in);
	if (fp)
	{
		fp >> *a;
		fp.close();
	}
	else
	{
		cout << "������ �������� �����!!!" << endl;
		system("pause");
	}
}

tetr::tetr(double data)
{
	a = new double;
	*a = data;
}

tetr::tetr(const tetr & A)
{
	a = new double;
	*a = *A.a;
}

tetr::~tetr()
{
	if (!a)
		delete a;

	//������ � ����
	ofstream fp("tetr.txt", ios::out);
	if (fp)
	{
		fp << *a;
		fp.close();
	}
	else
	{
		cout << "������ �������� �����!!!" << endl;
		system("pause");
	}
}

double tetr::get_a()
{
	return *a;
}

void tetr::set_a(double data)
{
	*a = data;
}

double tetr::finde_vol()
{
	set_vol((*a)*(*a)*(*a)*sqrt(2) / 12);
	cout << "�������:" << get_a() << endl;

	cout << "�����:" << get_vol() << endl;

	return get_vol();
}

void tetr::edit()
{
	double d;
	cout << "������� ����� ������� ���������:";
	cin >> d;
	*a = d;
	cout << endl;
}

