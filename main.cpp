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

		cout << "Введите фигуру:" << endl << "[1] Параллелепипед." << endl << "[2] Пирамида." << endl << "[3] Тетраэдр." << endl << "[4] Шар." << endl << "[0] Выход из программыю" << endl;
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			cout << "Что вы хотите сделать???" << endl << "[1] Вычислить обьём." << endl << "[2] Изменить параметры фигуры." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//вычислям обьём
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
					cout << "Введена неправильная команда!!!" << endl;
				}
			}
		
			break;
		case 2:
			cout << "Что вы хотите сделать???" << endl << "[1] Вычислить обьём." << endl << "[2] Изменить параметры фигуры." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//вычислям обьём
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
					cout << "Введена неправильная команда!!!" << endl;
				}
			}

			break;
		case 3:
			cout << "Что вы хотите сделать???" << endl << "[1] Вычислить обьём." << endl << "[2] Изменить параметры фигуры." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//вычислям обьём
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
					cout << "Введена неправильная команда!!!" << endl;
				}
			}

			break;
		case 4:
			cout << "Что вы хотите сделать???" << endl << "[1] Вычислить обьём." << endl << "[2] Изменить параметры фигуры." << endl;
			cin >> choice2;
			if (choice2 == 1)
			{
				//вычислям обьём
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
					cout << "Введена неправильная команда!!!" << endl;
				}
			}

			break;
		case 0:

			break;
		default:
			cout << "Введена неправильная команда!!!" << endl;
			break;
		}

	} while (choice);

	//вывод из файла


	for(int i = 0 ;i<4;i++)
		delete[] arr[i];

	return 0;
}