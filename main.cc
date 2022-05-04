#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include "employee.h"
#include "schedule.h"
using namespace std;

//Checks if a given id is present within EmployeeList
bool idIsPresent(const list<Employee>& EmployeeList, string id)
{
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_id() == id)
            return true;
    }
    return false;
}

//Function displays each employee's information
void display(list<Employee>& EmployeeList)
{
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        it->display_employee();
        cout << endl;
    }
}

bool add_availability(list<Employee>& EmployeeList, vector<string> employee_avail_data, string id)
{
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_id() == id)
        {
            it->set_availability(employee_avail_data);
            return true;
        }
    }
    return false;
}

int main()
{
    //List of all employees and their data
	list<Employee> EmployeeList;

    vector<string> employee_data, employee_avail_data;
    string line, word;

    cout << "reading employee data file contents..." << endl << endl;

    //Creates stream of employee data from file
    ifstream input_data("employee_data.csv", ifstream::in);
    //Reads csv file by line
    while(getline(input_data, line))
    {
        //Need to clear vector each time so each new employee's data doesn't build up
        employee_data.clear();
        //Creates stream from line string so we can parse using getline
        stringstream line_stream(line);
        //Word string contents get updated after each comma
        while(getline(line_stream, word, ','))
        {
            employee_data.push_back(word);
        }
        //Checks if employee does not exist in Employee List
        if(!idIsPresent(EmployeeList, employee_data[1]))
        {
            EmployeeList.emplace_back(employee_data[0], employee_data[1], employee_data[2], employee_data[3], employee_data[4]);
        }
    }
    input_data.close();

    ifstream input_avail("employee_availabilities.csv", ifstream::in);
    while(getline(input_avail, line))
    {
        employee_avail_data.clear();
        stringstream line_stream(line);
        while(getline(line_stream, word, ','))
        {
            employee_avail_data.push_back(word);
        }
        if(idIsPresent(EmployeeList, employee_avail_data[0]))
        {
            add_availability(EmployeeList, employee_avail_data, employee_avail_data[0]);
        }
    }

    display(EmployeeList);

    //Schedule generation
    Schedule work_schedule(EmployeeList);
    work_schedule.generate_schedule();

	return 0;
}



//Employee e1("Smith", "01601210", 0, "2105555555", "Marketing");
//e1.display();

//for(int i=0;i<employee_data.size();i++)
//{
//cout << employee_data[i] << endl;
//}