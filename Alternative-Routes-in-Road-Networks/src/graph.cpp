#include "graph.h"

Graph::Graph(int vertices) : numVertices(vertices), adjLists(vertices) {}

void Graph::addEdge(int src, int dest, double travelTime) {
    Edge edge = {dest, travelTime};
    adjLists[src].push_back(edge);
    Edge reverseEdge = {src, travelTime};
    adjLists[dest].push_back(reverseEdge);
}