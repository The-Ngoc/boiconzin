#include "Employee.h"

Employee::Employee() {
	IDemployee = "0000000";
	name = "No Name";
	address = "Viet Nam";
	baseSalary = 5000000;
}

string Employee::getIDEmployee() {
	return IDemployee;
}
string Employee::getName() {
	return name;
}
string Employee::getAddress() {
	return address;
}
lld Employee::getBaseSalary() {
	return baseSalary;
}

void Employee::setIDEmployee(const string ID) {
	this->IDemployee = ID;
}

void Employee::setName(const string name) {
	this->name = name;
}
void Employee::setAddress(const string address){
	this->address = address;
}
void Employee::setBaseSalary(lld salary) {
	this->baseSalary = salary;
}
void Employee::showInfo() {
	cout << "Ma nhan vien: " << IDemployee << endl;
	cout << "Ten: " << name << endl;
	cout << "Que quan: " << address << endl;
}
 void Employee::calculateSalary() {
	baseSalary = 2000000;
}
