#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <list>
#include "course.h"

class LinkedList {
    public:
        Course course; //course object
        std::list<Course> dependents; //linked-list of courses that are dependend on this one
        int inNumber; //Number of prerequisites for this course
        LinkedList(Course &course);
        void addListNode(Course &course);
}


#endif LINKEDLIST_H