
#include <string>
#ifndef STUDENT_H
#define STUDENT_H
namespace Dashboard {
    class student {
        std::string name;
        int age;
        public:
            int getAge();
            std::string getName();
            student(std::string newname, int newage);
    };
    class course {
        std::string coursename;
        public:
            std::string getcourse();
            course(std::string newname);
    };
}
#endif