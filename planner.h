#ifndef PLANNER_H
#define PLANNER_H

#include <iostream>
#include <vector>
#include "assignments.h"
#include <string>
//using namespace std; NOT in header files

class Planner{
    private:
        std::vector<Assignment> assignments;

    public:
        void addAssignment(const Assignment& a);
        void listAssignments() const;
        void sortByUrgency();
        void saveToFile(const std::string& filename) const;
        void loadFromFile(const std::string& filename);
};

#endif