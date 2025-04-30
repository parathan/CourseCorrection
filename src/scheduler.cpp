#include "scheduler.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>


scheduler::scheduler() {}

scheduler::scheduler(std::vector<course> courses) {
    for (auto course: courses) {
        graph[course.getName()] = course.getPrereqs();
    }
}

void scheduler::printSchedule() {
    std::cout << "Adjacency List for Graph:" << std::endl;
    for (auto &course: graph) {
        std::cout << course.first << ": ";
        for (auto prereq: course.second) {
            std::cout << prereq << " ";
        }
        std::cout << std::endl;
    }
}

void scheduler::printVisualSchedule() {
    std::cout << "Graph Representation" << std::endl;
}

course::course(std::string name, std::vector<std::string> prereqs)
    : name(name),
      prereqs(prereqs)
{}

std::string course::getName() { return name; }

std::vector<std::string> course::getPrereqs() { return prereqs; }
