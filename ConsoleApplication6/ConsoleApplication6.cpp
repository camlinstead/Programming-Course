// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

static void temperature ();
static void asciitable();

static void asciitable()
{
	int counter = 0;
	for(int i = 65; i <= 122; i++)
	{
		if(i < 91 || i > 96)
		{
				cout << char(i) <<" ";
				if(counter%4==0)
					cout << "\n";
		}
		
	}



}

class overload{
public:
	void print(int integer){
		cout << "testing integer: " << integer;
}
	void print(double doubl){
		cout << "testing double: " << doubl;
	}
}


static void temperature ()
{
	int clow;
	int chigh; 

	double ans;

	cout << "Enter the low fahrenheit temperature: ";
	cin >> clow;

	cout << "Enter the high fahrenheit temperature: ";
	cin >> chigh;

	for(int i=clow; i <= chigh; i++)
	{

		ans = (i - 32.0)*5.0/9.0;
		cout << "Answer is: " << ans << endl;

	}


}

int _tmain(int argc, _TCHAR* argv[])
{
	//temperature();
	asciitable(); 

	system("PAUSE");

	return 0;
}
