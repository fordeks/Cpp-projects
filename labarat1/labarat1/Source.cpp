#include <iostream>
#include <ctime>

using namespace std;

const int N = 15;
int arr[N];
int arr2[N];
int arr3[N];
int a;
int b;
int c;
void vvod()//���� ������
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr[i];
	}
}
void puz(int arr[], int N)//���������� ���������
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 0; i < N - 1; i++)
	{
		c = c + 1;
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (arr2[j]>arr2[j + 1])
			{
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
				c = c+1;
			}
			c = c + 1;
		}
	}
	cout << "C��������� ��������� "<<endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
	
}
void puz2(int arr[], int N)//���������� ��������� � ������ �����������
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 0; i < N - 1; i++)
	{
		c = c + 1;
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (arr2[j]<arr2[j + 1])
			{
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
				c = c + 1;
			}
			c = c + 1;
		}
	}
	cout << "C��������� ��������� � ������ ����������� " << endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
	
}
void vibor(int arr[], int N)//���������� �������
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 0; i < N - 1; i++)
	{
		c = c + 1;
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (arr2[j] < arr2[min])
			{
				min = j;
				c = c + 1;
			}
			c = c + 1;
		}
		int temp = arr2[i];
		arr2[i] = arr2[min];
		arr2[min] = temp;
	}
	cout << "C��������� ������� " << endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}

	
}
void vibor2(int arr[], int N)//���������� ������� � ������ �����������
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 0; i < N - 1; i++)
	{
		c = c + 1;
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (arr2[j] > arr2[min])
			{
				min = j;
				c = c + 1;
			}
			c = c + 1;
		}
		int temp = arr2[i];
		arr2[i] = arr2[min];
		arr2[min] = temp;		
	}
	cout << "C��������� ������� � ������ ����������� " << endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
	
}
void vstavk(int arr[], int N)//���������� ���������
{
	int temp;
	int j;
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 1; i < N; i++)
	{
		c = c + 1;
		j = i;
		while (j > 0 && arr2[j - 1] > arr2[j])
		{
			temp = arr2[j - 1];
			arr2[j - 1] = arr2[j];
			arr2[j] = temp;
			j--;
			c = c + 1;
		}
	}
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}

	cout << "C��������� �������� " << endl;
	cout << "���������� �������� " << c << endl;
}
void vstavk2(int arr[], int N)//���������� ���������
{
	int temp;
	int count;
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	for (int i = 1; i < N; i++)
	{
		c = c + 1;
		count = i;
		while (count > 0 && arr2[count - 1] < arr2[count])
		{
			temp = arr2[count - 1];
			arr2[count - 1] = arr2[count];
			arr2[count] = temp;
			count--;
			c = c + 1;
		}
	}
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
	cout << "C��������� �������� � ������ ����������� " << endl;
	cout << "���������� �������� " << c << endl;
}
void wella(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	int temp;
	int  S= N / 2;
	int j;
	while (S > 0)
	{
		for (int i = 0; i < (N - S); i++)
		{
			j = i;
			c = c + 1;
			while (j >= 0 && arr2[j] > arr2[j + S])
			{
				temp = arr2[j];
				arr2[j] = arr2[j + S];
				arr2[j + S] = temp;
				j--;
				c=c+1;
			}
		}
		S = S / 2;
	}
	cout << "C��������� ����� " << endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
}
void wella2(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
	}
	c = 0;
	int temp;
	int  S = N / 2;
	int j;
	while (S > 0)
	{
		for (int i = 0; i < (N - S); i++)
		{
			j = i;
			c = c + 1;
			while (j <= 0 && arr2[j] < arr2[j + S])
			{
				temp = arr2[j];
				arr2[j] = arr2[j + S];
				arr2[j + S] = temp;
				j--;
				c = c + 1;
			}
		}
		S = S / 2;
	}
	cout << "C��������� ����� � ������ ����������� " << endl;
	cout << "���������� �������� " << c << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr2[i];
	}
}
void vivod()//�����
{
	cout << "�����:" << endl;
	for (int i = 0; i <N; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr[i];
	}
	cout << endl;
}
void menu()
{
	cout << "<<========================================================================>>" << endl;
	cout << "    ���� 1-������� 2-����� 3-������� 4-����� 5-��� ���������� 6-�����" << endl;
	cout << "<<========================================================================>>" << endl;
	cin >> a;
	switch (a)
	{
	case 1:		
		do
		{
			system("cls");
			cout << "<<========================================================================>>" << endl;
			cout << "    ������� 1-����������� 2-� ������ ����������� 3-��� ���� 4-�����" << endl;
			cout << "<<========================================================================>>" << endl;
			cin >> b;
		} while (b>4||b<1);		
		switch (b)
		{
		case 1:
			system("cls");
			vivod();
			puz(arr, N);
			vivod();
			menu();
			break;
		case 2:
			system("cls");
			vivod();
			puz2(arr, N);
			vivod();
			menu();
			break;
		case 3:
			system("cls");
			vivod();
			puz(arr, N);
			vivod();
			puz2(arr, N);
			vivod();
			menu();
			break;
		case 4:
			system("cls");
			menu();
		default:
			system("cls");
			cout << "�������� �������� ������� � ����" << endl;
			menu();
			break;
		}
		break;
	case 2:
		do
		{
			system("cls");
			cout << "<<========================================================================>>" << endl;
			cout << "    ������� 1-����������� 2-� ������ ����������� 3-��� ���� 4-�����" << endl;
			cout << "<<========================================================================>>" << endl;
			cin >> b;
		} while (b>4 || b<1);
		switch (b)
		{
		case 1:
			system("cls");
			vivod();
			vibor(arr, N);
			vivod();
			menu();
			break;
		case 2:
			system("cls");
			vivod();
			vibor2(arr, N);
			vivod();
			menu();
			break;
		case 3:
			system("cls");
			vivod();
			vibor(arr, N);
			vivod();
			vibor2(arr, N);
			vivod();
			menu();
			break;
		case 4:
			system("cls");
			menu();
		default:
			system("cls");
			cout << "�������� �������� ������� � ����" << endl;
			menu();
			break;
		}
		break;
	case 3:
		do
		{
			system("cls");
			cout << "<<========================================================================>>" << endl;
			cout << "    ������� 1-����������� 2-� ������ ����������� 3-��� ���� 4-�����" << endl;
			cout << "<<========================================================================>>" << endl;
			cin >> b;
		} while (b>4 || b<1);
		switch (b)
		{
		case 1:
			system("cls");
			vivod();
			vstavk(arr, N);
			vivod();
			menu();
			break;
		case 2:
			system("cls");
			vivod();
			vstavk2(arr, N);
			vivod();
			menu();
			break;
		case 3:
			system("cls");
			vivod();
			vstavk(arr, N);
			vivod();
			vstavk2(arr, N);
			vivod();
			menu();
			break;
		case 4:
			system("cls");
			menu();
		default:
			system("cls");
			cout << "�������� �������� ������� � ����" << endl;
			menu();
			break;
		}
		break;
	case 4:
		do
		{
			system("cls");
			cout << "<<========================================================================>>" << endl;
			cout << "    ������� 1-����������� 2-� ������ ����������� 3-��� ���� 4-�����" << endl;
			cout << "<<========================================================================>>" << endl;
			cin >> b;
		} while (b>4 || b<1);
		switch (b)
		{
		case 1:
		    system("cls");
			vivod();
			wella(arr, N);
			vivod();
			menu();
			break;
		case 2:
			system("cls");
			vivod();
			wella2(arr, N);
			vivod();
			menu();
			break;
		case 3:
			system("cls");
			vivod();
			wella(arr, N);
			vivod();
			wella2(arr, N);
			vivod();
			menu();
			break;
		case 4:
		    system("cls");
			menu();
		default:
		    system("cls");
			cout << "�������� �������� ������� � ����" << endl;
			menu();
			break;
		}
		break;
	case 5:
		do
		{
			system("cls");
			cout << "<<========================================================================>>" << endl;
			cout << "    ������� 1-����������� 2-� ������ ����������� 3-��� ���� 4-�����" << endl;
			cout << "<<========================================================================>>" << endl;
			cin >> b;
		} while (b>4 || b<1);
		switch (b)
		{
		case 1:
			system("cls");
			vivod();
			puz(arr, N);
			vivod();
			vibor(arr, N);
			vivod();
			vstavk(arr, N);
			vivod();
			wella(arr, N);
			vivod();
			menu();
			break;
		case 2:
			system("cls");
			vivod();
			puz2(arr, N);
			vivod();
			vibor2(arr, N);
			vivod();
			vstavk2(arr, N);
			vivod();
			wella2(arr, N);
			vivod();
			menu();
			break;
		case 3:
			system("cls");
			vivod();
			puz(arr, N);
			vivod();
			puz2(arr, N);
			vivod();
			vibor(arr, N);
			vivod();
			vibor2(arr, N);
			vivod();
			vstavk(arr, N);
			vivod();
			vstavk2(arr, N);
			vivod();
			wella(arr, N);
			vivod();
			wella2(arr, N);
			vivod();
			menu();
			break;
		case 4:
			system("cls");
			menu();
		default:
			system("cls");
			cout << "�������� �������� ������� � ����" << endl;
			menu();
			break;
		}
		break;
	case 6:
		break;
	default:
		system("cls");
		menu();
		break;
	}
}
void main()
{
	setlocale(LC_ALL, "rus");
	vvod();
	menu();
}