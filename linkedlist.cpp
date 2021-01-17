#include "linkedlist.h"

LinkedList::LinkedList(Course &course)
    : course{ course },
      inNumber{ course.getCount() }
{}