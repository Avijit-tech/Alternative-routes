#include <iostream>
#include "graph.h"
#include "dijkstra.h"
#include "vehicle.h"
#include "opengl_utils.h"

int main(int argc, char** argv) {

    Graph graph(5);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 5);
    graph.addEdge(1, 2, 2);
    graph.addEdge(1, 3, 1);
    graph.addEdge(2, 3, 9);
    graph.addEdge(2, 4, 2);
    graph.addEdge(3, 4, 4);

    int src = 0;
    int dest = 4;
    std::vector<int> parent = dijkstra(graph, src);

    std::vector<Vehicle> vehicles;
    vehicles.push_back(Vehicle(src, parent[dest], 1.0));

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Road Network Simulation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}