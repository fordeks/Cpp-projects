#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int b, c, a, d;
	cout << "Помомшник по выбору игр @Богдан" << endl;
	cout << "Помочь выбрать в какую игру поиграть? 1-да 2-нет" << endl;
	cin >> b;
	if (b == 1)
	{
		a = rand() % 8;
		switch (a)
		{
		case 0:
		{
			system("color 02");
			cout << "ГТА" << endl;
			break;
		}
		case 1:
		{
			system("color 02");
			cout << "ГТА" << endl;
			break;
		}
		case 2:
		{
			system("color 0C");
			cout << "ДОТА" << endl;
			break;
		}
		case 3:
		{
			system("color 0C");
			cout << "ДОТА" << endl;
			break;
		}
		case 4:
		{
			system("color 46");
			cout << "кс" << endl;
			break;
		}
		case 5:
		{
			system("color 52");
			cout << "МАЙНКРАФТ" << endl;
			break;
		}
		case 6:
		{
			system("color 3E");
			cout << "Far CRY" << endl;
			break;
		}
		case 7:
		{
			system("color F0");
			cout << "Watch Dogs 2" << endl;
			break;
		}
		default:
			break;
		}
	}
	if (b == 2)
	{
		cout << "Как хочешь" << endl;
	}
	if (b==391)
	{
		system("color r");  //ДЛЯ ПОНЯТИЯ ЦВЕТА
	}
	if (b>=392)
	{
		cout << "ОШИБКА!!! Ведено неправильное число" << endl;
		while (true)
		{
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0A");
			system("color 0A");
			system("color 0A");
			system("color 0A");
		}
	}
	if (b >= 3)
	{
		cout << "ОШИБКА!!! Ведено неправильное число" << endl;
		while (true)
		{
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0A");
			system("color 0A");
			system("color 0A");
			system("color 0A");
		}
	}
	cout << "Помочь определиться с временем? 1-да 2-нет" << endl;
	cin >> c;
	if (c==1)
	{
		d = rand() % 9;
		switch (d)
		{
		case 0:
		{
			cout << "1час" << endl;
			break;
		}
		case 1:
		{
			cout << "1час" << endl;
			break;
		}
		case 2:
		{
			cout << "1час" << endl;
			break;
		}
		case 3:
		{
			cout << "2часа" << endl;
			break;
		}
		case 4:
		{
			cout << "2часа" << endl;
			break;
		}
		case 5:
		{
			cout << "2часа" << endl;
			break;
		}
		case 6:
		{
			cout << "3часа" << endl;
			break;
		}
		case 7:
		{
			cout << "3часа" << endl;
			break;
		}
		case 8:
		{
			cout << "OVER9000 часов" << endl;
			break;
		}
		default:
		{
			break;
		}
		}
	}
	if (c==2)
	{
		system("color 2");
		cout << "Как хочешь" << endl;
	}
	if (c>=3)
	{
		cout << "ОШИБКА!!! Ведено неправильное число" << endl;
		while (true)
		{
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0C");
			system("color 0A");
			system("color 0A");
			system("color 0A");
			system("color 0A");
		}
	}
	system("pause");
}