#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Employee.h"



class EmployeeService
{
	vector<Employee> listEmployee;
public:
	void addEmployee(Employee);
	void displayList();
};

