//schedule class definition
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <fstream>
#include "employee.h"
#include "schedule.h"
using namespace std;

//CONSTRUCTOR
Schedule::Schedule(list<Employee>& EmployeeList)
{
    Monday["Morning"]; Monday["Afternoon"]; Monday["Night"];
    Tuesday["Morning"]; Tuesday["Afternoon"]; Tuesday["Night"];
    Wednesday["Morning"]; Wednesday["Afternoon"]; Wednesday["Night"];
    Thursday["Morning"]; Thursday["Afternoon"]; Thursday["Night"];
    Friday["Morning"]; Friday["Afternoon"]; Friday["Night"];


    map<string, vector<int>> availability;
    int hours = 0;
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_seniority() == "0")
        {
            availability = it->get_availability();

            //MONDAY
            //Checking if employee can be scheduled Monday, only enschedules first valid timeslot for day then moves on to next day
            if(availability["Monday"].at(0)==1 && Monday["Morning"].size()!=3 && hours<40)
            {
                Monday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(1)==1 && Monday["Afternoon"].size()!=3 && hours<40)
            {
                Monday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(2)==1 && Monday["Night"].size()!=3 && hours<40)
            {
                Monday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //TUESDAY
            if(availability["Tuesday"].at(0)==1 && Tuesday["Morning"].size()!=3 && hours<40)
            {
                Tuesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(1)==1 && Tuesday["Afternoon"].size()!=3 && hours<40)
            {
                Tuesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(2)==1 && Tuesday["Night"].size()!=3 && hours<40)
            {
                Tuesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Wednesday
            if(availability["Wednesday"].at(0)==1 && Wednesday["Morning"].size()!=3 && hours<40)
            {
                Wednesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(1)==1 && Wednesday["Afternoon"].size()!=3 && hours<40)
            {
                Wednesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(2)==1 && Wednesday["Night"].size()!=3 && hours<40)
            {
                Wednesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Thursday
            if(availability["Thursday"].at(0)==1 && Thursday["Morning"].size()!=3 && hours<40)
            {
                Thursday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(1)==1 && Thursday["Afternoon"].size()!=3 && hours<40)
            {
                Thursday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(2)==1 && Thursday["Night"].size()!=3 && hours<40)
            {
                Thursday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Friday
            if(availability["Friday"].at(0)==1 && Friday["Morning"].size()!=3 && hours<40)
            {
                Friday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(1)==1 && Friday["Afternoon"].size()!=3 && hours<40)
            {
                Friday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(2)==1 && Friday["Night"].size()!=3 && hours<40)
            {
                Friday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }
            break;
        }
    }

    //Checking Senior Employees
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_seniority() == "1")
        {
            hours = 0;
            availability.clear();
            availability = it->get_availability();

            //MONDAY
            //Checking if employee can be scheduled Monday, only enschedules first valid timeslot for day then moves on to next day
            if(availability["Monday"].at(0)==1 && Monday["Morning"].size()!=3 && hours<40)
            {
                Monday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(1)==1 && Monday["Afternoon"].size()!=3 && hours<40)
            {
                Monday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(2)==1 && Monday["Night"].size()!=3 && hours<40)
            {
                Monday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //TUESDAY
            if(availability["Tuesday"].at(0)==1 && Tuesday["Morning"].size()!=3 && hours<40)
            {
                Tuesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(1)==1 && Tuesday["Afternoon"].size()!=3 && hours<40)
            {
                Tuesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(2)==1 && Tuesday["Night"].size()!=3 && hours<40)
            {
                Tuesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Wednesday
            if(availability["Wednesday"].at(0)==1 && Wednesday["Morning"].size()!=3 && hours<40)
            {
                Wednesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(1)==1 && Wednesday["Afternoon"].size()!=3 && hours<40)
            {
                Wednesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(2)==1 && Wednesday["Night"].size()!=3 && hours<40)
            {
                Wednesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Thursday
            if(availability["Thursday"].at(0)==1 && Thursday["Morning"].size()!=3 && hours<40)
            {
                Thursday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(1)==1 && Thursday["Afternoon"].size()!=3 && hours<40)
            {
                Thursday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(2)==1 && Thursday["Night"].size()!=3 && hours<40)
            {
                Thursday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Friday
            if(availability["Friday"].at(0)==1 && Friday["Morning"].size()!=3 && hours<40)
            {
                Friday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(1)==1 && Friday["Afternoon"].size()!=3 && hours<40)
            {
                Friday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(2)==1 && Friday["Night"].size()!=3 && hours<40)
            {
                Friday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }
            break;
        }
    }

    //Checking Junior Employees
    for(auto it = EmployeeList.begin(); it != EmployeeList.end(); it++)
    {
        if(it->get_seniority() == "2")
        {
            hours = 0;
            availability.clear();
            availability = it->get_availability();

            //MONDAY
            //Checking if employee can be scheduled Monday, only enschedules first valid timeslot for day then moves on to next day
            if(availability["Monday"].at(0)==1 && Monday["Morning"].size()!=3 && hours<40)
            {
                Monday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(1)==1 && Monday["Afternoon"].size()!=3 && hours<40)
            {
                Monday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Monday"].at(2)==1 && Monday["Night"].size()!=3 && hours<40)
            {
                Monday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //TUESDAY
            if(availability["Tuesday"].at(0)==1 && Tuesday["Morning"].size()!=3 && hours<40)
            {
                Tuesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(1)==1 && Tuesday["Afternoon"].size()!=3 && hours<40)
            {
                Tuesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Tuesday"].at(2)==1 && Tuesday["Night"].size()!=3 && hours<40)
            {
                Tuesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Wednesday
            if(availability["Wednesday"].at(0)==1 && Wednesday["Morning"].size()!=3 && hours<40)
            {
                Wednesday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(1)==1 && Wednesday["Afternoon"].size()!=3 && hours<40)
            {
                Wednesday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Wednesday"].at(2)==1 && Wednesday["Night"].size()!=3 && hours<40)
            {
                Wednesday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Thursday
            if(availability["Thursday"].at(0)==1 && Thursday["Morning"].size()!=3 && hours<40)
            {
                Thursday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(1)==1 && Thursday["Afternoon"].size()!=3 && hours<40)
            {
                Thursday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Thursday"].at(2)==1 && Thursday["Night"].size()!=3 && hours<40)
            {
                Thursday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }

            //Friday
            if(availability["Friday"].at(0)==1 && Friday["Morning"].size()!=3 && hours<40)
            {
                Friday["Morning"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(1)==1 && Friday["Afternoon"].size()!=3 && hours<40)
            {
                Friday["Afternoon"].push_back(it->get_name());
                hours = hours + 8;
            }
            else if(availability["Friday"].at(2)==1 && Friday["Night"].size()!=3 && hours<40)
            {
                Friday["Night"].push_back(it->get_name());
                hours = hours + 8;
            }
            break;
        }
    }
    Monday["Morning"].resize(3); Monday["Afternoon"].resize(3); Monday["Night"].resize(3);
    Tuesday["Morning"].resize(3); Tuesday["Afternoon"].resize(3); Tuesday["Night"].resize(3);
    Wednesday["Morning"].resize(3); Wednesday["Afternoon"].resize(3); Wednesday["Night"].resize(3);
    Thursday["Morning"].resize(3); Thursday["Afternoon"].resize(3); Thursday["Night"].resize(3);
    Friday["Morning"].resize(3); Friday["Afternoon"].resize(3); Friday["Night"].resize(3);
}

void Schedule::generate_schedule()
{
    ofstream output("WorkSchedule.txt", ofstream::out);

    output << "MONDAY" << endl;
    output << "###########################################" << endl;
    output << left << setw(15) << " " << left << setw(10) << "Employee" << left << setw(10) << "Employee" << left << setw(10) << "Employee" << endl;
    output << "-------------------------------------------" << endl;
    output << left << setw(15) << "Morning   |" << left << setw(10) << Monday["Morning"].at(0) << left << setw(10) << Monday["Morning"].at(1) << left << setw(10) << Monday["Morning"].at(2) << endl;
    output << left << setw(15) << "Afternoon |" << left << setw(10) << Monday["Afternoon"].at(0) << left << setw(10) << Monday["Afternoon"].at(1) << left << setw(10) << Monday["Afternoon"].at(2) << endl;
    output << left << setw(15) << "Night     |" << left << setw(10) << Monday["Night"].at(0) << left << setw(10) << Monday["Night"].at(1) << left << setw(10) << Monday["Night"].at(2) << endl;
    output << endl << endl;

    output << "TUESDAY" << endl;
    output << "###########################################" << endl;
    output << left << setw(15) << " " << left << setw(10) << "Employee" << left << setw(10) << "Employee" << left << setw(10) << "Employee" << endl;
    output << "-------------------------------------------" << endl;
    output << left << setw(15) << "Morning   |" << left << setw(10) << Tuesday["Morning"].at(0) << left << setw(10) << Tuesday["Morning"].at(1) << left << setw(10) << Tuesday["Morning"].at(2) << endl;
    output << left << setw(15) << "Afternoon |" << left << setw(10) << Tuesday["Afternoon"].at(0) << left << setw(10) << Tuesday["Afternoon"].at(1) << left << setw(10) << Tuesday["Afternoon"].at(2) << endl;
    output << left << setw(15) << "Night     |" << left << setw(10) << Tuesday["Night"].at(0) << left << setw(10) << Tuesday["Night"].at(1) << left << setw(10) << Tuesday["Night"].at(2) << endl;
    output << endl << endl;

    output << "WEDNESDAY" << endl;
    output << "###########################################" << endl;
    output << left << setw(15) << " " << left << setw(10) << "Employee" << left << setw(10) << "Employee" << left << setw(10) << "Employee" << endl;
    output << "-------------------------------------------" << endl;
    output << left << setw(15) << "Morning   |" << left << setw(10) << Wednesday["Morning"].at(0) << left << setw(10) << Wednesday["Morning"].at(1) << left << setw(10) << Wednesday["Morning"].at(2) << endl;
    output << left << setw(15) << "Afternoon |" << left << setw(10) << Wednesday["Afternoon"].at(0) << left << setw(10) << Wednesday["Afternoon"].at(1) << left << setw(10) << Wednesday["Afternoon"].at(2) << endl;
    output << left << setw(15) << "Night     |" << left << setw(10) << Wednesday["Night"].at(0) << left << setw(10) << Wednesday["Night"].at(1) << left << setw(10) << Wednesday["Night"].at(2) << endl;
    output << endl << endl;

    output << "THURSDAY" << endl;
    output << "###########################################" << endl;
    output << left << setw(15) << " " << left << setw(10) << "Employee" << left << setw(10) << "Employee" << left << setw(10) << "Employee" << endl;
    output << "-------------------------------------------" << endl;
    output << left << setw(15) << "Morning   |" << left << setw(10) << Thursday["Morning"].at(0) << left << setw(10) << Thursday["Morning"].at(1) << left << setw(10) << Thursday["Morning"].at(2) << endl;
    output << left << setw(15) << "Afternoon |" << left << setw(10) << Thursday["Afternoon"].at(0) << left << setw(10) << Thursday["Afternoon"].at(1) << left << setw(10) << Thursday["Afternoon"].at(2) << endl;
    output << left << setw(15) << "Night     |" << left << setw(10) << Thursday["Night"].at(0) << left << setw(10) << Thursday["Night"].at(1) << left << setw(10) << Thursday["Night"].at(2) << endl;
    output << endl << endl;

    output << "FRIDAY" << endl;
    output << "###########################################" << endl;
    output << left << setw(15) << " " << left << setw(10) << "Employee" << left << setw(10) << "Employee" << left << setw(10) << "Employee" << endl;
    output << "-------------------------------------------" << endl;
    output << left << setw(15) << "Morning   |" << left << setw(10) << Friday["Morning"].at(0) << left << setw(10) << Friday["Morning"].at(1) << left << setw(10) << Friday["Morning"].at(2) << endl;
    output << left << setw(15) << "Afternoon |" << left << setw(10) << Friday["Afternoon"].at(0) << left << setw(10) << Friday["Afternoon"].at(1) << left << setw(10) << Friday["Afternoon"].at(2) << endl;
    output << left << setw(15) << "Night     |" << left << setw(10) << Friday["Night"].at(0) << left << setw(10) << Friday["Night"].at(1) << left << setw(10) << Friday["Night"].at(2) << endl;
    output << endl << endl;

    output.close();
}