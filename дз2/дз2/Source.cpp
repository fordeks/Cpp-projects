#include<iostream>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

void main()
{
	ifstream f;//читать
	ofstream F;//писать
	const int N = 1000;
	string arr[N];
	int i = 0;
	f.open("Text.txt");
	int a;
	srand(time(0));

	while (!f.eof())
	{
		f >> arr[i];
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
	f.close();
	system("pause");
	F.open("Text2.txt");	
	for (int j = 0; j < i/2; j++)
	{
		a = rand() % i;
		if (a % 2 == 1)
			a--;
		F << arr[a] << " ";
		a = rand() % i;
		if (a % 2 == 0)
			a++;
		F << arr[a] << " ";
		F << endl;
	}
	F.close();
}
