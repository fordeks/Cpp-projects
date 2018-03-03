#include <iostream>
#include <string> 
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	string a;
	string b;
	int c;
	int d;
	srand(time(0));
	cout << "Введите первую команду" << endl;
	cin >> a;
	cout << "Введите вторую команду" << endl;
	cin >> b;
	c = rand() % 100;
	d = rand() % 100;
	if (c<17)
	{
		cout << "меленькая вероятность" << endl;
		cout << "Победы:" << a << endl;
	}
	if (c<41&&c>16)
	{
	    cout << "средняя вероятность" << endl;
		cout << "Победы:" << a << endl;
	}
	if (c>40&&c<50)
	{
		cout << "Высокая вероятность" << endl;
		cout << "Победы:" << a << endl;
	}
	if (c<67&&c>49)
	{
		cout << "меленькая вероятность" << endl;
		cout << "Победы:" << b << endl;
	}
	if (c<90&&c>66)
	{
		cout << "средняя вероятность" << endl;
		cout << "Победы:" << b << endl;
	}
	if (c>90)
	{
		cout << "Высокая вероятность" << endl;
		cout << "Победы:" << b << endl;
	}
	system("pause");
}
