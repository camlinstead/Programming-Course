// Lec3_Headerfiles and classes.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

#include "myFormulas.h"
#include "Rectangle.h"

using namespace std;



class person{
private:
	string fn;
	string ln;
	double slry;
public:
	void setFirstName(string);
	void setLastName(string);
	void setSalary(double);
	string getFullName() const;
	double getSalary() const;
	double getDoubleSalary() const;


};

void person::setFirstName(string FirstName)
{
	fn = FirstName;
}
void person::setLastName(string LastName)
{

	ln = LastName;
}
void person::setSalary(double salary)
{

	slry=salary;
}

string person::getFullName() const
{

return fn + " " + ln;
}
 
double person::getSalary() const
{

return slry;

}

double person::getDoubleSalary() const
{

return slry*2;
}

int _tmain(int argc, _TCHAR* argv[]) {

	char quit;
	double nm1, nm2, ans;

	cout <<"Header Example" << endl;
	cout <<"Enter your first number: ";
	cin>>nm1;

	cout << endl << "Enter your second number:";
	cin >> nm2;

	ans = add2Nums(nm1, nm2);
	cout<<"Add:" << ans << endl;

	ans = sub2Nums(nm1, nm2);
	cout<<"Subtract:" << ans << endl;

	ans = mult2Nums(nm1, nm2);
	cout<<"Multiple:" << ans << endl;

	ans = div2Nums(nm1, nm2);
	cout<<"Divide:" << ans << endl;

	ans = avg2Nums(nm1, nm2);
	cout<<"Average:" << ans << endl;

	//////////////////////////////

	cout<<endl<<"/////////// person example"<<endl;
	person p1;

	p1.setFirstName("Bubba");
	p1.setLastName("Smith");
	p1.setSalary(60000);


	cout<< "Class Example one" << endl;
	cout << p1.getFullName() << endl;
	cout << p1.getSalary() <<endl;
	cout<< p1.getDoubleSalary() << endl << endl;


	cout<< " Rectangle Example" <<endl;
	Rectangle r1;
	r1.setWidth(30);
	r1.setLength(70);

	cout << endl<< "Width is " << r1.getWidth() <<endl;
	cout << endl << " Length is " << r1.getLength() <<endl;
	cout << endl<< "Area is " << r1.getArea()<<endl;


	cout << endl << endl <<"Enter q to quit";
	cin >> quit;
	return 0;
}
