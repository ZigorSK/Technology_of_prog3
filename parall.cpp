#include "parall.h"

parall::parall()
{
	s0 = new double ;
	h = new double;
	*s0 = *h = 0;	
	//���� �� �����
	ifstream fp("parall.txt", ios::in);
	if (fp)
	{
		fp >> *s0 >> *h;
		fp.close();
	}
	else
	{
		cout << "������ �������� �����!!!" << endl;
		system("pause");
	}
}

parall::parall(double S0, double H)
{
	s0 = new double;
	h = new double;
	*s0 = S0;
	*h = H;
}

parall::parall(const parall & A)
{
	s0 = new double;
	h = new double;
	*s0 = *A.s0;
	*h = *A.h;
}

parall::~parall()
{
	if(!s0)
		delete s0;
	if(!h)
		delete h;

	//������ � ����
	ofstream fp("parall.txt", ios::out);
	if (fp)
	{
		fp << *s0 <<" "<< *h;
		fp.close();
	}
	else
	{
		cout << "������ �������� �����!!!" << endl;
		system("pause");
	}
}

void parall::set_s0(double v)
{
	*s0 = v;
}

double parall::get_s0()
{
	return *s0;
}

void parall::set_h(double v)
{
	*h = v;
}

double parall::get_h()
{
	return *h;
}

double parall::finde_vol()
{
	set_vol((*s0)*(*h));

	cout << "������� ���������:" << get_s0() << endl;
	cout << "������:" << get_h() << endl;
	cout << "�����:" << get_vol()<<endl;
	 
	return(get_vol());
}

void parall::edit()
{
	double d;
	cout << "������� ����� ������� ���������";
	cin >> d;
	*s0 = d;
	cout << endl;

	cout << "������� ����� ������";
	cin >> d;
	*h = d;
	cout << endl;
}

