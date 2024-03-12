/*Implementation of Graph*/
/*____________________solved by Shahriar Hasnat Shafin Ahmed_________________*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 100; // Maximum number of vertices

void addEdge(int graph[MAX_V][MAX_V], int u, int v)
{
    graph[u][v] = 1;
}

void printGraph(int graph[MAX_V][MAX_V], int V)
{
    for (int u = 0; u < V; ++u)
    {
        bool hasConnections = false;
        for (int v = 0; v < V; ++v)
        {
            if (graph[u][v])
            {
                hasConnections = true;
                break;
            }
        }
        if (hasConnections)
        {
            cout << "Vertex " << u << " is connected to:";
            for (int v = 0; v < V; ++v)
            {
                if (graph[u][v])
                {
                    cout << " " << v;
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    int V = 5; // Number of vertices
    int directedGraph[100][100] = {0};
    int undirectedGraph[100][100] = {0};

    // Add edges for directed graph
    addEdge(directedGraph, 0, 1);
    addEdge(directedGraph, 0, 3);
    addEdge(directedGraph, 1, 2);
    addEdge(directedGraph, 2, 3);
    addEdge(directedGraph, 3, 4);

    // Add edges for undirected graph
    addEdge(undirectedGraph, 0, 1);
    addEdge(undirectedGraph, 0, 3);
    addEdge(undirectedGraph, 1, 2);
    addEdge(undirectedGraph, 2, 3);
    addEdge(undirectedGraph, 3, 4);
    addEdge(undirectedGraph, 1, 0);
    addEdge(undirectedGraph, 3, 0);
    addEdge(undirectedGraph, 2, 1);
    addEdge(undirectedGraph, 3, 2);

    cout << "Undirected Graph: \n";
    printGraph(undirectedGraph, V);
    cout << "-------------------------------\n";
    cout << "Directed Graph: \n";
    printGraph(directedGraph, V);

    return 0;
}