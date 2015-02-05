// loop if statement pattern.cpp : Defines the entry point for the console application.
//




#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std; 


int _tmain(int argc, _TCHAR* argv[])
{
	char quit;
	int cnt = 0; 
	string xx = "";
	int cnt2 = 9;


	while (cnt < 20)
	{
	if (cnt > 9)
	{
	cout << xx.substr((0), cnt2) << endl;
	cnt2 --;
	
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

	////first triangle
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
