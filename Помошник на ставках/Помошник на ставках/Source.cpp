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
	cout << "������� ������ �������" << endl;
	cin >> a;
	cout << "������� ������ �������" << endl;
	cin >> b;
	c = rand() % 100;
	d = rand() % 100;
	if (c<17)
	{
		cout << "��������� �����������" << endl;
		cout << "������:" << a << endl;
	}
	if (c<41&&c>16)
	{
	    cout << "������� �����������" << endl;
		cout << "������:" << a << endl;
	}
	if (c>40&&c<50)
	{
		cout << "������� �����������" << endl;
		cout << "������:" << a << endl;
	}
	if (c<67&&c>49)
	{
		cout << "��������� �����������" << endl;
		cout << "������:" << b << endl;
	}
	if (c<90&&c>66)
	{
		cout << "������� �����������" << endl;
		cout << "������:" << b << endl;
	}
	if (c>90)
	{
		cout << "������� �����������" << endl;
		cout << "������:" << b << endl;
	}
	system("pause");
}
