#include "dijkstra.h"
#include <queue>
#include <functional>
#include <limits>

std::vector<int> dijkstra(Graph& graph, int src) {
    std::priority_queue<std::pair<double, int>, std::vector<std::pair<double, int>>, std::greater<std::pair<double, int>>> pq;
    std::vector<double> dist(graph.numVertices, std::numeric_limits<double>::max());
    std::vector<int> parent(graph.numVertices, -1);

    pq.push(std::make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const Edge& edge : graph.adjLists[u]) {
            int v = edge.destination;
            double weight = edge.travelTime;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(std::make_pair(dist[v], v));
                parent[v] = u;
            }
        }
    }

    return parent;
}