#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>

class Student {
    public:
        Student(std::string, int, int);
        
    private:
        std::string name;
        int age;
        int code;
};


 #endif