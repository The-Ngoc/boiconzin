#pragma once
#include "Employee.h"

class TechnicalEmployee: public Employee
{
private:
	int numberOfProject;
public:
	TechnicalEmployee() {
		numberOfProject = 1;
	}
	int getNumberOfProject() {
		return numberOfProject;
	}
	void setNumberOfProject(int num) {
		this->numberOfProject = num;
	}
	void calculateSalary() {
		cout << "Luong thang cua nhan vien ky thuat: " << (Employee::getBaseSalary() + numberOfProject * 500000) << "VND" << endl;
	}
	void displayInfo() {
		Employee::showInfo();
		cout << "Chuc vu: Nhan Vien Ky Thuat." << endl;
		cout << "So du an da hoan thanh: " << numberOfProject << " du an." << endl;
		cout << "Luong thuong them: " << numberOfProject * 500000 << "VND" << endl;
		calculateSalary();
	}
};

