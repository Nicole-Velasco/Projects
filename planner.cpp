#include <iostream>
#include "planner.h"
#include <fstream>
#include <sstream>
using namespace std;


void Planner::addAssignment(const Assignment& a){
    assignments.push_back(a); // adds to end 
}

void Planner::listAssignments() const{
    cout << "All assignments:" << endl;

    for(const Assignment& a : assignments){
        cout << a.name << " | Due: " << a.dueDate << " | Difficulty: "<< a.difficulty<<endl;
    }
}

void Planner::saveToFile(const string& filename) const{
    ofstream file(filename);

    for(const auto& a: assignments){
        file << a.name << "|" << a.dueDate << "|" << a.difficulty << "\n" ;
    }
}

void Planner::loadFromFile(const string& filename){
    ifstream file(filename);
    if(!file){
        return; //if file doesn't exist
    }
    assignments.clear();

    string line;
    while(getline(file,line)){
        stringstream ss(line);

        string name, dueDate, diffStr;
        getline(ss, name, '|');
        getline(ss, dueDate, '|');
        getline(ss, diffStr, '|');

        int diff = stoi(diffStr);
        assignments.emplace_back(name, dueDate, diff); 
    }

}