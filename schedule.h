//schedule class declaration
#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
#include <vector>
#include <map>
#include <list>
#include "employee.h"
using namespace std;

class Schedule
        {
        private:
            map<string, vector<string>> Monday;
            map<string, vector<string>> Tuesday;
            map<string, vector<string>> Wednesday;
            map<string, vector<string>> Thursday;
            map<string, vector<string>> Friday;

        public:
            Schedule(list<Employee>&);
            void generate_schedule();

        };

#endif