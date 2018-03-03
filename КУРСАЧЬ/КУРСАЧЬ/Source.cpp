#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <conio.h>

#define UP 72
#define DOWN 80
#define ENTER 13
#define ESC 27


using namespace std;

int CORES;//колво ядер  cores-подпрограмма
double GHZ;//Частота переменная Ghz-подпрогамма
string VIDEOADAPTER; //встроенная или дискретная
int OZY;//

class computer
{
public:
	

private:

	void Ghz()
	{
		GHZ = rand() % 6;
		if (GHZ==0)
		{
			GHZ = 3.4;
		}
		if (GHZ == 1)
		{
			GHZ = 3;
		}
		if (GHZ == 2)
		{	
			GHZ = 2.7;
		}
		if (GHZ == 3)
		{

			GHZ = 2.3;
		}
		if (GHZ == 4)
		{
			GHZ = 2;
		}
		if (GHZ == 5)
		{
			GHZ = 1.5;
		}	
	}
	
	void cores()
	{
		CORES = rand() % 3;	
		CORES = CORES + 1;
		if (CORES==3)
		{
			CORES = CORES + 1;
		}
	}

	void videoadapter()
	{
		int random1;
		random1 = rand() % 2;
		if (random1 == 1)
		{
			VIDEOADAPTER = "встроенная";
		}
		if (random1 == 0)
		{
			VIDEOADAPTER = "дискретная";
		}
	}

	void ozy()
	{
		fstream file;
		file.open("OZY.txt", ios::in);
		int random2;
		random2 = rand() % 5;
		random2 = random2 + 1;
		for (int i = 0; i <= random2; i++)
		{
			file >> OZY;
		}
		file.close();
	}
};


void Menu(int V, int E)
{
	system("CLS");

	if (E == 1) {
		cout << "<<===============================================================>" << endl;
		cout << "                              MENU" << endl;
		cout << "<<===============================================================>" << endl;

		if (V == 1) cout << "-->";
		cout << "                   Вывод всего списка" << endl;

		if (V == 2) cout << "-->";
		cout << "                   Вывод по порядковому номеру" << endl;

		if (V == 3) cout << "-->";
		cout << "                   Вывод самого производительного ПК" << endl;

		if (V == 4) cout << "-->";
		cout << "                   Вывод самого слабого ПК" << endl;

		if (V == 5) cout << "-->";
		cout << "                   Вывод по количеству ядер" << endl;

		if (V == 6) cout << "-->";
		cout << "                   Вывод информации об авторе" << endl;

		if (V == 7) cout << "-->";
		cout << "                              Выход" << endl;
		cout << "<<===============================================================>" << endl;
		cout << "                              MENU" << endl;
		cout << "<<===============================================================>" << endl;
	}
	else
	{
		if (E == 2)
		{
		}
		switch (V)
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			break;
		}
		case 5:
		{
			break;
		}
		case 6:
		{
			cout << "<<===============================================================>" << endl;
			cout << "                              Автор" << endl;
			cout << "                  Богдан Божко студент группы ОПК-215" << endl;
			cout << "<<===============================================================>" << endl;
			break;
		}
		case 7:
		{
			break;
		}
		}
	}

}


void main()
{
	int Vibor = 1;
	int Enter = 1;

	srand(time(0));
	setlocale(LC_ALL, "rus");	

	/*while (true)
	{
	cout << "Введите желаемое количество экземпляров (1 - 20): " << endl;
	
	if ( )
	{
	cout<<"ОШИБКА! ";
	}
		else 
		{
			
		}
	}*/
	system("CLS");
	
	while (true) {
		Menu(Vibor, Enter);
		_getch();
		switch (_getch())
		{
		case UP: if (Vibor > 1 && Enter == 1) --Vibor; break;
		case DOWN: if (Vibor < 7 && Enter == 1) ++Vibor; break;
		case ENTER: if (Enter < 2) ++Enter; break;
		case ESC: if (Enter > 1) --Enter; break;
		}
	}
	
}
