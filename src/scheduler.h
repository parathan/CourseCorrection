#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

// Forward declaration of course class
class course;

class scheduler {
    public:
        // Empty constructor
        scheduler();
        
        // Constructor with list of courses
        scheduler(std::vector<course> courses);
        
        // Method to print the course schedule
        void printSchedule();

        //Method to visually show the course schedule
        void printVisualSchedule();
        
    private:
        // A map from course name to its list of prerequisites
        std::unordered_map<std::string, std::vector<std::string>> graph;
};

class course {
    public: 
        // Constructor with course name and prerequisites
        course(std::string name, std::vector<std::string> prereqs);
        
        // Getter for course name
        std::string getName();
        
        // Getter for course prerequisites
        std::vector<std::string> getPrereqs();

    private:
        // Course name
        std::string name;
        
        // List of course prerequisites
        std::vector<std::string> prereqs;
};

#endif // SCHEDULER_H