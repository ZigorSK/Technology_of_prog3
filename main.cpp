#include"Header.h"
#include<fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	volume *arr[4] = { new parall, new piramid, new tetr, new ball };
	int choice = 0, choice2 = 0;

	do
	{
		system("cls");

		cout << "������� ������:" << endl << "[1] ��������������." << endl << "[2] ��������." << endl << "[3] ��������." << endl << "[4] ���." << endl << "[0] ����� �� ����������" << endl;
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			cout << "��� �� ������ �������???" << endl << "[1] ��������� �����." << endl << "[2] �������� ��������� ������." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//�������� �����
				arr[0]->finde_vol();
				system("pause");
			}
			else
			{
				if (choice2 == 2)
				{
					arr[0]->edit();
				}
				else
				{
					cout << "������� ������������ �������!!!" << endl;
				}
			}
		
			break;
		case 2:
			cout << "��� �� ������ �������???" << endl << "[1] ��������� �����." << endl << "[2] �������� ��������� ������." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//�������� �����
				arr[1]->finde_vol();
				system("pause");
			}
			else
			{
				if (choice2 == 2)
				{
					arr[1]->edit();
				}
				else
				{
					cout << "������� ������������ �������!!!" << endl;
				}
			}

			break;
		case 3:
			cout << "��� �� ������ �������???" << endl << "[1] ��������� �����." << endl << "[2] �������� ��������� ������." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//�������� �����
				arr[2]->finde_vol();
				system("pause");
			}
			else
			{
				if (choice2 == 2)
				{
					arr[2]->edit();
				}
				else
				{
					cout << "������� ������������ �������!!!" << endl;
				}
			}

			break;
		case 4:
			cout << "��� �� ������ �������???" << endl << "[1] ��������� �����." << endl << "[2] �������� ��������� ������." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//�������� �����
				arr[3]->finde_vol();
				system("pause");
			}
			else
			{
				if (choice2 == 2)
				{
					arr[3]->edit();
				}
				else
				{
					cout << "������� ������������ �������!!!" << endl;
				}
			}

			break;
		case 0:

			break;
		default:
			cout << "������� ������������ �������!!!" << endl;
			break;
		}

	} while (choice);

	//����� �� �����


	for(int i = 0 ;i<4;i++)
		delete[] arr[i];

	return 0;
}