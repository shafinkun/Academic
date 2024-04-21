// Finding All Pairs Shortest Paths in a Graph
// The Floyd-Warshall algorithm is an efficient algorithm for finding all pairs shortest paths in a weighted graph with positive or negative edge weights (but with no negative cycles). The algorithm is based on dynamic programming and has a time complexity of O(V^3), where V is the number of vertices in the graph.
#include <iostream>
using namespace std;

#define INF 99999
#define V 4

void printSolution(int dist[][V])
{
    cout << "Shortest distances between every pair of vertices:" << endl;
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

void floydWarshall(int graph[][V])
{
    int dist[V][V];

    // Initialize the distance matrix with the given graph
    for (int i = 0; i < V; ++i)
        for (int j = 0; j < V; ++j)
            dist[i][j] = graph[i][j];

    // Update distance matrix by considering all vertices as intermediate vertices
    for (int k = 0; k < V; ++k)
    {
        for (int i = 0; i < V; ++i)
        {
            for (int j = 0; j < V; ++j)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist);
}

int main()
{
    int graph[V][V] = {{0, 5, INF, 10},
                       {INF, 0, 3, INF},
                       {INF, INF, 0, 1},
                       {INF, INF, INF, 0}};
    floydWarshall(graph);
    
    return 0;
}