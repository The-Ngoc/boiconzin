#include "EmployeeService.h"

void EmployeeService::addEmployee(Employee newE) {
	listEmployee.push_back(newE);
}

void EmployeeService::displayList() {
	for (Employee x : listEmployee) {
		x.showInfo();
	}
}