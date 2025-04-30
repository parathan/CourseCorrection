# your_project/CMakeLists.txt

cmake_minimum_required(VERSION 3.15)
project(CourseCorrection)

set(CMAKE_CXX_STANDARD 17)

# Add source files
add_executable(CourseCorrection
    src/CourseCorrection.cpp
    src/scheduler.cpp
)