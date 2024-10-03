#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "OfficeEmployee.h"
#include "TechnicalEmployee.h"
#include "EmployeeService.h"

int main() {
	int res = 1;
	EmployeeService listE;
	Manager newBie;
	listE.addEmployee(newBie);
	listE.displayList();
	do {
		cout << "--------------- Nhap Chuc Nang---------------" << endl;
		cout << " 1. Them nhan vien." << endl;
		cout << " 2. Xoa nhan vien." << endl;
		cout << " 3. Chinh sua thong tin nhan vien." << endl;
		cout << " 4. Hien thi thong tin nhan vien." << endl;
		cout << " 5. Hien thi danh sach sinh vien." << endl;
		cout << " 0. Thoat." << endl;
		cout << " Chon chuc nang (0 -> 5): "; cin >> res;
	} while (res != 0);
	return 0;
}