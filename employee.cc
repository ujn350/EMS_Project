//schedule class definition
#include <iostream>
#include "employee.h"
using namespace std;


//CONSTRUCTORS
Employee::Employee(string employee_name, string employee_id, string employee_seniority, string employee_phone, string employee_department)
{
	name = employee_name;
	id = employee_id;
	seniority = employee_seniority;

	employee_phone.insert(3, "-");
	employee_phone.insert(7, "-");
	phone_number = employee_phone;

	department = employee_department;
}

Employee::Employee(const Employee& other)
{
	name = other.name;
	id = other.id;
	seniority = other.seniority;
	phone_number = other.phone_number;
	department = other.department;
}



//MEMBER FUNCTIONS
//set methods
bool Employee::set_name(string employee_name)
{
	name = employee_name;
	return true;
}

bool Employee::set_id(string employee_id)
{
	id = employee_id;
	return true;
}

bool Employee::set_seniority(string employee_seniority)
{
	seniority = employee_seniority;
	return true;
}

bool Employee::set_phone(string employee_phone)
{
	employee_phone.insert(3, "-");
	employee_phone.insert(7, "-");
	phone_number = employee_phone;
	return true;
}


bool Employee::set_department(string employee_department)
{
	department = employee_department;
	return true;
}

bool Employee::set_availability(vector<string> availability_csv)
{
    availability["Monday"] = availability_csv[0];
    availability["Tuesday"] = availability_csv[1];
    availability["Wednesday"] = availability_csv[2];
    availability["Thursday"] = availability_csv[3];
    availability["Friday"] = availability_csv[4];
}


//get methods
string Employee::get_name() const
{
	return name;
}

string Employee::get_id() const
{
	return id;
}

string Employee::get_seniority() const
{
	return seniority;
}

string Employee::get_phone() const
{
	return phone_number;
}

string Employee::get_department() const
{
	return department;
}



void Employee::display() const
{
	cout << "EMPLOYEE NAME: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "SENIORITY: " << seniority << endl;
	cout << "PHONE NUMBER: " <<  phone_number << endl;
	cout << "DEPARTMENT: " << department << endl;
}