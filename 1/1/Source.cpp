#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int b, c, a, d;
	cout << "��������� �� ������ ��� @������" << endl;
	cout << "������ ������� � ����� ���� ��������? 1-�� 2-���" << endl;
	cin >> b;
	if (b == 1)
	{
		a = rand() % 8;
		switch (a)
		{
		case 0:
		{
			system("color 02");
			cout << "���" << endl;
			break;
		}
		case 1:
		{
			system("color 02");
			cout << "���" << endl;
			break;
		}
		case 2:
		{
			system("color 0C");
			cout << "����" << endl;
			break;
		}
		case 3:
		{
			system("color 0C");
			cout << "����" << endl;
			break;
		}
		case 4:
		{
			system("color 46");
			cout << "��" << endl;
			break;
		}
		case 5:
		{
			system("color 52");
			cout << "���������" << endl;
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
		cout << "��� ������" << endl;
	}
	if (b==391)
	{
		system("color r");  //��� ������� �����
	}
	if (b>=392)
	{
		cout << "������!!! ������ ������������ �����" << endl;
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
		cout << "������!!! ������ ������������ �����" << endl;
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
	cout << "������ ������������ � ��������? 1-�� 2-���" << endl;
	cin >> c;
	if (c==1)
	{
		d = rand() % 9;
		switch (d)
		{
		case 0:
		{
			cout << "1���" << endl;
			break;
		}
		case 1:
		{
			cout << "1���" << endl;
			break;
		}
		case 2:
		{
			cout << "1���" << endl;
			break;
		}
		case 3:
		{
			cout << "2����" << endl;
			break;
		}
		case 4:
		{
			cout << "2����" << endl;
			break;
		}
		case 5:
		{
			cout << "2����" << endl;
			break;
		}
		case 6:
		{
			cout << "3����" << endl;
			break;
		}
		case 7:
		{
			cout << "3����" << endl;
			break;
		}
		case 8:
		{
			cout << "OVER9000 �����" << endl;
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
		cout << "��� ������" << endl;
	}
	if (c>=3)
	{
		cout << "������!!! ������ ������������ �����" << endl;
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