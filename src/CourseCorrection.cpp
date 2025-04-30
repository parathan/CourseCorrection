#include <iostream>
#include "scheduler.h"

int main() {
    std::vector<course> courses = {
        course("Math101", {"Physics101", "CS101"}),
        course("CS101", {"Math101"}),
        course("Physics101", {"Math101"}),
        course("Chem101", {"Physics101"})
    };
    
    scheduler s(courses);
    s.printSchedule();
    return 0;
}