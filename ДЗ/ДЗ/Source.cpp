#include <iostream>
#include<fstream>
#include<ctime>

using namespace std;

void main()
{
	fstream f;
	const int N = 1000;
	int arr[N];
	int ar2[N];
	int j = 0;
	int d;
	int a;
	srand(time(0));
	f.open("Text.txt", ios::in);
	for (int i = 0; i < N; i++)
	{
		f >> arr[i];
		if (f.eof() == false)
		{
			cout << arr[i] << " ";

			j++;
		}
	}
	cout << endl;
	d = j;
	for (int i = 0; i < j; i++)
	{
		
		ar2[i] = arr[d-1];
		d--;
	}
	a = rand() % 10;
	f.close();
	f.open("Text.txt", ios::out);	
	for (int i = 0; i < j; i++)
	{
		f << ar2[i]<<" ";
	}
	f << a <<" ";
	f.close();
	system("pause");
}
