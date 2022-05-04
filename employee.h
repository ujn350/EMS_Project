//employee class declaration
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <map>
using namespace std;

class Employee
{
	private:
		string name;
		string id;
		string seniority;
		string phone_number;
		string department;

        map<string, vector<int>> availability;

	public:
		Employee(string, string, string, string, string);
		Employee(const Employee&);

		bool set_name(string);
		bool set_id(string);
		bool set_seniority(string);
		bool set_phone(string);
		bool set_department(string);

        bool set_availability(vector<string>);

		string get_name() const;
		string get_id() const;
		string get_seniority() const;
		string get_phone() const;
		string get_department() const;
        map<string, vector<int>> get_availability() const;

		void display_employee();
};


#endif