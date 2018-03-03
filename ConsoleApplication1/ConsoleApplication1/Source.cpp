#include <conio.h>
#include <iostream>

using namespace std;

void main()
{
	_getch();
	int temp = 0;
	do
	{	
	
		
		temp = _getch();
		if (temp == 72)
		{
			cout << "Vverh" << temp<<endl;
		}
		if (temp == 80)
		{
			cout << "Vniz" << temp << endl;
		}
		if (temp == 75)
		{
			cout << "Vlevo" << temp << endl;
		}
		if (temp == 77)
		{
			cout << "Vpravo" << temp << endl;
		}
	
	} while (temp!=13);

}