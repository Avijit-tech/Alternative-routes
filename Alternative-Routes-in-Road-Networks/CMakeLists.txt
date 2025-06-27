cmake_minimum_required(VERSION 3.10)
project(Alternative-Routes-in-Road-Networks)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/graph.cpp
    src/dijkstra.cpp
    src/vehicle.cpp
    src/opengl_utils.cpp
)

# Libraries
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Executable
add_executable(main ${SOURCES} ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})