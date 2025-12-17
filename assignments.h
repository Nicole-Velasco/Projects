#include <iostream>
#include <string>

class Assignment {
    public:
        std::string name;
        std::string dueDate;
        int difficulty;

        Assignment(std::string n, std::string d, int diff);

        int daysUntilDue() const;
        double urgencyScore() const;
};
