#include "course.h"

Course::Course(const std::string courseCode, const std::string name, const std::vector<std::string> &prerequisites)
    : courseCode{ courseCode },
      name{ name },
      prerequisites{ prerequisites },
      prereqCount{ prerequisites.size() }
{}

const std::string & Course::getCode() const {
    return courseCode;
}

const std::string & Course::getName() const {
    return name;
}

const std::vector<std::string> & Course::getPrereqs() const {
    return prerequisites;
}

void addPrereq(const std::string prereq) {
    prerequisites.push_back(prereq);
    prereqCount++;
}

void Course::print(std::ostream &out) const {
    out << courseCode << ": " << name << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Course &course) {
    course.print(out);
    return out;
}