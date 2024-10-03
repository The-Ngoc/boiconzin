#include "Employee.h"

class OfficeEmployee: public Employee
{
private:
	const int res = 3;
	int hourOvertime;
public:
	OfficeEmployee() {
		hourOvertime = 1;
	}

	int getRes() {
		return res;
	}

	int getHourOvertime() {
		return hourOvertime;
	}
	void setHourOvertime(int hour) {
		this->hourOvertime = hour;
	}

	void calculateSalary() override {
		cout << "Luong thang cua nhan vien van phong : " << (Employee::getBaseSalary() + (hourOvertime * 100000)) << "VND" << endl;
	}

	void displayInfo() {
		Employee::showInfo();
		cout << "Chuc vu: Nhan Vien Van Phong." << endl;
		cout << "Thoi gian tang ca : " << hourOvertime << " gio" << endl;
		cout << "Luong tang ca: " << hourOvertime * 100000 << "VND" << endl;
		calculateSalary();
	}
};

