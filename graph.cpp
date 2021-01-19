#include "graph.h"

void Graph::addNode(const Course &course) {
    graph.emplace_back(course);
    courseReference.insert( std::pair<std::string, int>(course.getCode(), counter));
    counter++;
}

void Graph::init() {
    int length = graph.size();
    for (int i = 0; i < length; i++) {
        int prereqLength = graph[i].getPrereqs().size();
        for (int j = 0; j < prereqLength; j++) {
            std::string prereq = graph[i].course.getPrereqs()[j];
            graph[courseReference[prereq]].addListNode(graph[i].course);
        }
    }
}