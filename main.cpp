#include <iostream>
#include "planner.h"
#include "assignments.h"
using namespace std;

int main(){
    Planner planner; //create a planner

    //test cases
    Assignment a1("CS Hw", "3-14-2025", 3);
    Assignment a2("Bio Hw", "4-5-2025", 2);
    Assignment a3("Math Hw", "5-16-2025", 5);

    planner.addAssignment(a1);
    planner.addAssignment(a2);

    planner.listAssignments();

    planner.addAssignment(a3);

    planner.listAssignments();

    return 0;
}