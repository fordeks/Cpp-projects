#include <iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "���� FOR: \n";
	const int N = 5;
	int Mas[N];
	for (int i = 0; i < N; i++)
	{
		cout << "�����: ";
		cin >> Mas[i];
	}
	cout << "�����: ";
	for (int i = 0; i < N; i++)
	{
		cout << Mas[i] ;
		cout << " ";
	}
	cout << endl;
	cout << "���� WHILE: \n";
	int i = 0;
	while (i < N)
	{
		cout << "�����: ";
		cin >> Mas[i];
		i++;
	}
	i = 0;
	cout << "�����: ";
	while (i < N)
	{
		
		cout << Mas[i] ;
		cout << " ";
		i++;
	}
	i = 0;
	cout << endl;
	cout << "���� DO WHILE: \n";
	do
	{
		cout << "�����: ";
		cin >> Mas[i];
		i++;
	} while (i < N);
	i = 0;
	cout << "�����: ";
	do
	{
		cout << Mas[i];
		cout << " ";
		i++;
	} while (i < N);
	system("pause");
}