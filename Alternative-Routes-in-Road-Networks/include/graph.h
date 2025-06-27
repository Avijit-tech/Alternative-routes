#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>
#include <utility>

struct Edge {
    int destination;
    double travelTime;
};

class Graph {
public:
    int numVertices;
    std::vector<std::list<Edge>> adjLists;

    Graph(int vertices);
    void addEdge(int src, int dest, double travelTime);
};

#endif 