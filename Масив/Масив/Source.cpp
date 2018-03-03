#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	const
		int N = 10;
	int arr[N];
	int temp;
    
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand()%10;

	}
	cout << "Masiv"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	cout << endl;
	cout << "sortirovaniy"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
}