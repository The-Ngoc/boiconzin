#pragma once
#include <iostream>
#include <string>


typedef long long int lld; 

using namespace std;

class Employee
{
private:
	string IDemployee;
	string name;
	string address;
	lld baseSalary;
public:
	Employee();

	string getIDEmployee();
	string getName();
	string getAddress();
	lld getBaseSalary();

	void setIDEmployee(const string);
	void setName(const string);
	void setAddress(const string);
	void setBaseSalary(lld);

	//method
	void showInfo();
	virtual void calculateSalary();
	virtual void displayInfo() = 0;

};




