#include "course.h"

Course::Course(const std::string courseCode, const std::string name)
    : courseCode{ courseCode },
      name{ name }
{}

const std::string & Course::getCode() const {
    return courseCode;
}

const std::string & Course::getName() const {
    return name;
}

void Course::print(std::ostream &out) const {
    out << courseCode << ": " << name << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Course &course) {
    course.print(out);
    return out;
}