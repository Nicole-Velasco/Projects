#include <iostream>
#include "planner.h"
using namespace std;


void Planner::addAssignment(const Assignment& a){
    assignments.push_back(a);
}

void Planner::listAssignments() const{
    cout << "All assignments:" << endl;

    for(const Assignment& a : assignments){
        cout << a.name << " | Due:" << a.dueDate << " | Difficulty: "<< a.difficulty<<endl;
    }
}