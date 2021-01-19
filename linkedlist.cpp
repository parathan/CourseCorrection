#include "linkedlist.h"

LinkedList::LinkedList(Course &course)
    : course{ course },
      inNumber{ course.getCount() }
{}

void LinkedList::addListNode(Course &course) {
  dependents.push_back(course);
}