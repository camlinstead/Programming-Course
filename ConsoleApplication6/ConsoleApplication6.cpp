// Lec_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <String>
#include <vector>
#include <iostream>

using namespace std;

// prototyping
static void arraypass1(int a[], int asize);
static void arraypass2 (int a[][4], int rows, int cols);

static void arraypass1(int a[], int asize)
{
	cout<<"a array passed \n";
	for(int cntr = 0; cntr < asize; cntr++)
	{
		cout << a[cntr] << " ";
	}

	cout << endl << endl;

}

static void arraypass2 (int a[][4], int rows, int cols)
{

}

struct person {
	string lname;
	double salary;

	
};

int _tmain(int argc, _TCHAR* argv[]) 
{

	char quit;

	//arrays

	int x1[5];

	int x2[] = {41, 42, 43, 44, 45, 46};
	int x2size = 6;

	cout<<"x2 array ";

	for (int cntr = 0; cntr < x2size; cntr++)
	{
		cout  << x2[cntr] << " ";
	}

	cout << endl<<endl;

	arraypass1 (x2, x2size);

	int x3[][4] = {{21,22,23,24}, {41,42,43,44}, {51,52,53,54,}  };
	
	for (int row =0; row < 3; row++)
	{
		for(int col =0; col<4; col++)
		{
			cout << x3[row][col] << " ";
		}
		cout<<endl;
	}
	cout <<endl << endl;

	arraypass2(x3,3, 4);

	//-------

	vector<string> myVector;
	
	myVector.push_back("one");
	myVector.push_back("two");
	myVector.push_back("three");
	myVector.push_back("four");
	myVector.push_back("five");
	myVector.push_back("six");
	myVector.push_back("seven");
	myVector.push_back("eight");

	//print vector
	cout << " Item in our vector\n";
	for(int cntr = 0;cntr < myVector.size(); cntr++)
	{
		cout << myVector.at(cntr) << endl;
	}

	//remove last element
	myVector.pop_back();
		for(int cntr = 0;cntr < myVector.size(); cntr++)
	{
		cout << myVector.at(cntr) << endl;
	}
	cout<<endl<<endl;

	myVector.insert(myVector.begin()+ 2,"banana");
	for(int cntr = 0;cntr < myVector.size(); cntr++)
		cout << myVector.at(cntr) << endl;


	cout <<endl << endl << endl << "structure" <<endl;

	/////////////
	person xx;
	xx.lname = "Linstead";
	xx.salary = 9.99;

	cout << xx.lname << "   " << xx.salary;

	person ArrayOfPeople[3]; 

	ArrayOfPeople[0].lname = "Sally";
	ArrayOfPeople[0].salary = 4444;

		ArrayOfPeople[1].lname = "Smith";
	ArrayOfPeople[1].salary = 6666;

		ArrayOfPeople[2].lname = "Schmitt";
	ArrayOfPeople[2].salary = 555;

	cout << endl << endl;
	cout << " Array of people\n\n";

	for(int cntr = 0; cntr < 3; cntr++)
	{
		cout << ArrayOfPeople[cntr].lname << "  $" 
			<< ArrayOfPeople[cntr].salary << endl;

	}



	cout<<" please enter something to quit: ";
	cin >> quit;

	return 0;
}
