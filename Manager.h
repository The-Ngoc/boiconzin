#pragma once
#include "Employee.h"

class Manager: public Employee
{
private:
	const int res = 1;
	lld bonus;
public:
	Manager(){
		bonus = 0;
	}
	int getSet() {
		return res;
	}
	lld getBonus() {
		return bonus;
	}
	void setBonus(lld bonus) {
		this->bonus = bonus;
	}
	void calculateSalary() override{
		cout << "Luong thang cua quan ly: " << (Employee::getBaseSalary() + bonus) << "VND" <<  endl;
	}
	void displayInfo() override {
		Employee::showInfo();
		cout << "Chuc vu: Quan Ly." << endl;
		cout << "Luong thuong : " << bonus << "VND" << endl;
		calculateSalary();
	}
};

