#ifndef GRAPH_H
#define GRAPH_H
#include <string>
#include <vector>
#include <iostream>
#include "linkedlist.h"
#include "course.h"

class Graph {
    private:
        int counter = 0;
    public:
        std::vector<LinkedList> graph;
        std::map<std::string,int> courseReference;
        //courseReference is a hashmap to make setting up the graph edges
        //done in O(1) time by constant lookup time of the hashmap instead
        //of looping through array which would be an O(n) time for each prereq.
        void addNode(const Course &course);
        void init();
};

#endif GRAPH_H
