#include <iostream> 
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "цикл FOR: \n";
	const int N = 5;
	int Mas[N];
	for (int i = 0; i < N; i++)
	{
		cout << "число: ";
		cin >> Mas[i];
	}
	cout << "Масив: ";
	for (int i = 0; i < N; i++)
	{
		cout << Mas[i] ;
		cout << " ";
	}
	cout << endl;
	cout << "цикл WHILE: \n";
	int i = 0;
	while (i < N)
	{
		cout << "число: ";
		cin >> Mas[i];
		i++;
	}
	i = 0;
	cout << "Масив: ";
	while (i < N)
	{
		
		cout << Mas[i] ;
		cout << " ";
		i++;
	}
	i = 0;
	cout << endl;
	cout << "цикл DO WHILE: \n";
	do
	{
		cout << "число: ";
		cin >> Mas[i];
		i++;
	} while (i < N);
	i = 0;
	cout << "Масив: ";
	do
	{
		cout << Mas[i];
		cout << " ";
		i++;
	} while (i < N);
	system("pause");
}