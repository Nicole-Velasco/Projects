#include <iostream>
#include <limits> // for getDifficulty()
#include <typeinfo> // returns type of variable
#include "planner.h"
#include "assignments.h"
using namespace std;

int getDifficulty();

int main(){
    Planner planner; //create a planner
    planner.loadFromFile("assignments.txt");
    int choice;

    while (true)
    {
        cout << "\n Smart Study Planner"<<endl;
        cout << "1.\t Add assignment"<<endl;
        cout << "2:\t View all assignments"<<endl;
        cout << "3:\t Exit"<<endl;
        cout << "Enter your choice:\t";

        cin >> choice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        switch(choice){
            case 1:{ // must add {} when declaring variable in switch
                string name;
                string dueDate;
                int difficulty;

                cout << "Assignment name: ";
                cin.ignore();
                getline(cin,name);

                cout << "\n Due date (MM/DD/YYY):";
                getline(cin,dueDate);

                difficulty = getDifficulty();

                Assignment a(name,dueDate,difficulty);
                planner.addAssignment(a);

                cout << "Assignment has been added"<<endl; 
                break;
            }

            case 2:
                planner.listAssignments();
                break;
            case 3: 
                planner.saveToFile("assignments.txt");
                cout<<"Goodbye"<<endl;
                return 0;
            default:
                cout<< "Invalid input.\n";
                break;
        }
    }
    return 0;
}

int getDifficulty(){
    int d;
    while(true){
        cout << "Difficulty (1-5)";
        cin >> d;
        if(!cin.fail()&& d<=5 && d>=1)
            return d;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.\n"; 
    };
}