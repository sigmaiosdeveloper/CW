#include "include/components.h"
#include <iostream>
int main() {
    std::string studentname;
    int studentage;
    std::cout << "Welcome to the CloudCamp student portal\n";
    std::cout << "Please enter your name below:\n";
    std::cin >> studentname;
    std::cout << "Enter you age below:\n";
    std::cin >> studentage;
    Dashboard::student student_on_file(studentname, studentage);
    char correct;
    std::cout << "Is this information correct? (y\n) Name: " << student_on_file.getName() << "Age: " << student_on_file.getAge();
    std::cin >> correct;
    if (correct == 'y') {
        std::cout << "Alright! let's get started!\n";
        std::cout << "Type :quit to exit program, type help for a command list\n";
        while (1) {
            
            std::string command;
            std::cout << "> ";
            std::cin >> command;
            if (command == "help") {
                std::cout << ":quit for quit\n";
            }
            else if (command == ":quit") {
                std::cout << "killing program\n";
                return 0;
            }
        }
    } else if (correct == 'n') {

    } else {
        std::cout << "invalid choice, killing program\n";
        return 0;
    }
}