//schedule class definition
#include <iostream>
#include <string>
#include <iomanip>
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
    for(int i = 1; i < 6; i++)
    {
        string day = availability_csv[i];
        string s0(1,day[0]);
        string s1(1,day[1]);
        string s2(1,day[2]);

        int morning = stoi(s0);
        int afternoon = stoi(s1);
        int night = stoi(s2);

        switch(i)
        {
            case 1:
                availability["Monday"].push_back(morning);
                availability["Monday"].push_back(afternoon);
                availability["Monday"].push_back(night);
                break;
            case 2:
                availability["Tuesday"].push_back(morning);
                availability["Tuesday"].push_back(afternoon);
                availability["Tuesday"].push_back(night);
                break;
            case 3:
                availability["Wednesday"].push_back(morning);
                availability["Wednesday"].push_back(afternoon);
                availability["Wednesday"].push_back(night);
                break;
            case 4:
                availability["Thursday"].push_back(morning);
                availability["Thursday"].push_back(afternoon);
                availability["Thursday"].push_back(night);
                break;
            case 5:
                availability["Friday"].push_back(morning);
                availability["Friday"].push_back(afternoon);
                availability["Friday"].push_back(night);
                break;
        }
    }
    return true;
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

map<string, vector<int>> Employee::get_availability() const
{
    return availability;
}



void Employee::display_employee(){
    cout << "EMPLOYEE NAME: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "SENIORITY: " << seniority << endl;
	cout << "PHONE NUMBER: " <<  phone_number << endl;
	cout << "DEPARTMENT: " << department << endl << endl;


    cout << "AVAILABILITY" << endl;
    cout << "###################################" << endl;
    cout << left << setw(10) << "Day" << left << setw(10) << "Morning" << left << setw(10) << "Afternoon" << left << setw(10) << "Night" << endl;
    cout << left << setw(10) << "Monday" << left << setw(10) << availability["Monday"].at(0) << left << setw(10) << availability["Monday"].at(1) << left << setw(10) << availability["Monday"].at(2) << endl;
    cout << left << setw(10) << "Tuesday" << left << setw(10) << availability["Tuesday"].at(0) << left << setw(10) << availability["Tuesday"].at(1) << left << setw(10) << availability["Tuesday"].at(2) << endl;
    cout << left << setw(10) << "Wednesday" << left << setw(10) << availability["Wednesday"].at(0) << left << setw(10) << availability["Wednesday"].at(1) << left << setw(10) << availability["Wednesday"].at(2) << endl;
    cout << left << setw(10) << "Thursday" << left << setw(10) << availability["Thursday"].at(0) << left << setw(10) << availability["Thursday"].at(1) << left << setw(10) << availability["Thursday"].at(2) << endl;
    cout << left << setw(10) << "Friday" << left << setw(10) << availability["Friday"].at(0) << left << setw(10) << availability["Friday"].at(1) << left << setw(10) << availability["Friday"].at(2) << endl;
    cout << endl;
}