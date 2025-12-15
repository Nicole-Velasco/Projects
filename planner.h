#include <iostream>
#include <vector>
#include "assignments.h"
using namespace std;


class Planner{
    private:
        vector<Assignment> assignments;

    public:
        void addAssignment(const Assignment& a);
        void listAssignments() const;
        void sortByUrgency();
};