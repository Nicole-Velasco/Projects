#include <iostream>

class Assignment {
    public:
        std::string name;
        std::string dueDate;
        int difficulty;

        Assignment(std::string n, std::string d, int diff);

        int daysUntilDu() const;
        double urgencyScore() const;
};
