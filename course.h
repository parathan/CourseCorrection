#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <vector>
#include <iostream>

/*
Course class is made to store course data and have the possibility to expand to include extra
data such as course times, professors, term availabilities, etc.
*/
class Course {
    private:
        std::string courseCode;
        std::string name;
    public:
        Course(const std::string courseCode, const std::string name);
        const std::string &getCode() const;
        const std::string &getName() const;
        void print(std::ostream &out) const;
};

std::ostream &operator<<(std::ostream &out, const Course &course);

#endif COURSE_H