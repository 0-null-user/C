/*
 *       Filename:  employee.cpp
 *
 *    Description:  To make an Employee class... 
 *
 *        Version:  1.0
 *        Created:  06/20/2022 02:59:34 PM
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 */

#include <iostream>
using namespace std;

class employee{
	public:
	string name;
	string designation;
	int salary; //data member

	employee(){
		cout << "default constructor invoked" << endl;
	} 		// default constructor
	
	employee(string n, string d, int s){
		name = n;
		designation = d;
		salary = s;
	} 		// parameterised constructor

	employee(employee &a){
		cout << "Copy of constructor A" << endl;
		name = a.name;
		designation = a.designation;
		salary = a.salary;
	} 		// copy constructor

	~employee(){
		cout << "Destructer Invoked" << endl;
	}

	// operator overloading
	bool operator == (employee &a){
		if(name==a.name && designation==a.designation && salary==a.salary){
			return true;
		}
		else{
			return false;
		}
	}

	void printData();
};

	void
employee::printData (  )
{
	cout << "Name: ";
	cout << name << endl;
	cout << "Designation: ";
	cout << designation << endl;
	cout << "Salary: ";
	cout << salary << endl;
}		/* -----  end of function printData  ----- */
	int
main ( int argc, char *argv[] )
{
	employee a("Harsh", "Jr Sys Admin", 15000);
	a.printData();
	employee b("Abhishek", "Jr Developer", 20000); // Object of class employee
	b.printData();
	employee c=a;
	c.printData();
	
	if(b==a){
		cout << "Equal" << endl;
	}
	else{
		cout << "Not Equal" << endl;
	}
	return 0;
}			/* ----------  end of function main  ---------- */
