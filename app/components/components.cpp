#include "../include/components.h"

int Dashboard::student::getAge() {
    return age;
}

std::string Dashboard::student::getName() {
    return name;
}


Dashboard::student::student(std::string newname, int newage) {
    name = newname;
    age = newage;
}

Dashboard::course::course(std::string newname) {
    coursename = newname;
}

std::string Dashboard::course::getcourse() {
    return coursename;
}