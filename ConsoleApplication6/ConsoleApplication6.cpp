// loop if statement pattern.cpp : Defines the entry point for the console application.
//




#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


static void temperature();
static void asciitable();

static void asciitable()
{
	int counter = 0;
	for (int i = 65; i <= 122; i++)
	{
		if (i < 91 || i > 96)
		{
			cout << char(i) << " ";
			if (counter % 13 == 0) //this will split in 4 lines
				cout << "\n";
		}

	}



}


static void temperature()
{
	int clow;
	int chigh;

	double ans;

	cout << "Enter the low fahrenheit temperature: ";
	cin >> clow;

	cout << "Enter the high fahrenheit temperature: ";
	cin >> chigh;

	for (int i = clow; i <= chigh; i++)
	{

		ans = (i - 32.0)*5.0 / 9.0;
		cout << "Answer is: " << ans << endl;

	}


}

 this code needs to be worked vvv
static void functionoverload(){
	overload ol;
	
	ol.print(1);
}

class overload{
public:
	void print(int integer){
		cout << "testing integer: " << integer;
}
	void print(double doubl){
		cout << "testing double: " << doubl;
	}
};

static void questionSix() {

	int in;

	cout << "Enter the question number: ";

	cin >> in;

	switch (in){
	case 1:
		cout << "This is the question 1.\n";
		break;

	case 2:
		cout << "This is the question 2.\n";
		break;

	case 3:
		cout << "This is the question 3.\n";

	case 4:
		cout << "This is the question 4.\n";

	case 5:
		cout << "This is the question 5.\n";


		//repeat till question 6

	default:
		cout << "Invalid question.\n";
		break;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	
	temperature();
	asciitable(); 
	functionOverload();
	questionSix();
	
	
	
	
	char quit;
	int cnt = 0;
	string xx = "";
	int cnt2 = 9;


	while (cnt < 20)
	{
		if (cnt > 9)
		{
			cout << xx.substr((0), cnt2) << endl;
			cnt2--;

		}
		else{
			xx = xx + "*";

			cout << xx << endl;
		}
		cnt++;
		//cnt = cnt+2; this is how i count by two's
	}

	cout << "Press any letter to quit ";
	cin >> quit;

	////first triangle				//failure pattern
	//for (int r = 0; r < 10; r++)
	//{
	//	for (int c = 0; c < r; c++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	////second triangle
	//for (int r = 10; r > 0; r--)
	//{
	//	for (int c = 0; c < r; c++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//system("PAUSE");

	return 0;
}
