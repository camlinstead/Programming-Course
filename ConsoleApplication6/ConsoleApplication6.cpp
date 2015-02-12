// loop if statement pattern.cpp : Defines the entry point for the console application.
//




#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


static void temperature();
static void asciitable();
static void functionoverload();
static void myfunction(int num1, int num2, int num3);
static void myfunction(double num1, double num2, double num3);

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

static void Pattern()
{
	int cnt = 0; 
	int cnt2 = 9;
	string xx = ""; 

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



}



//this code needs to be worked vvv
static void functionoverload(){

	int x;
	int q;
	int z;
	int choice;

	double t;
	double u;
	double y;
	cout << "Enter 1 for integer's and 2 for doubles\n\n";
	cin >> choice;
	
	if (choice == 1)
	{
	cout << "enter num1 ";
	cin >> x;

	cout << "enter num2 ";
	cin >> q;

	cout << "enter num3 ";
	cin >> z;

	myfunction(x,q,z);
	}
	else if(choice == 2){
	
	cout << "enter num1 ";
	cin >> t;

	cout << "enter num2 ";
	cin >> u;

	cout << "enter num3 ";
	cin >> y;

	myfunction(t,u,y);
	
	}
}

static void myfunction(int num1, int num2, int num3)
{
	int ans;
	ans = num1 + num2 * num3;
	cout << "Your answer is: " << ans << endl << endl;
}


static void myfunction(double num1, double num2, double num3)		//reference to complete template
{
	double ans;
	ans = num1 + num2 * num3;
	cout << "Your answer is: " << ans << endl << endl;
}

static void questionSix() {

	int in;

	cout << "Enter the question number: \n1-temp\n2-pattern\n3-overload\n4-template\n5-asciitable\n\n";

	cin >> in;

	switch (in){
	case 1:
		cout << "This is the question 1. c-f\n";
		temperature();
		break;

	case 2:
		cout << "This is the question 2. Pattern\n";
		Pattern();
		break;

	case 3:
		cout << "This is the question 3. Overload\n";
		functionoverload();
		break;

	case 4:
		cout << "This is the question 4. Template\n";
		break;

	case 5:
		cout << "This is the question 5. AsciiTable\n";
		asciitable();
		break;

		//repeat till question 6

	default:
		cout << "Invalid question.\n";
		break;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	char quit = 'n';

	while (quit == 'n')
	{
	questionSix();

	cout << "Press y to quit or n to continue: ";
	cin >> quit;
	}

	return 0;
}
