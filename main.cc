#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include "employee.h"
using namespace std;

bool idIsPresent(const list<Employee>& EmployeeList, string id)
{
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_id() == id)
            return true;
    }
    return false;
}

int main()
{
	list<Employee> EmployeeList;
    string name, id, seniority, phone, dept;
    string line;
    cout << "reading employee data file contents..." << endl << endl;

    ifstream input("employee_data.csv", ifstream::in);
    while(getline(input, line))
    {

    }

	return 0;
}



//Employee e1("Smith", "01601210", 0, "2105555555", "Marketing");
//e1.display();