// Implementing Depth-First Search (DFS) Algorithm for Graph Traversal
#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<bool> &visited, vector<vector<int>> &graph)
{
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, visited, graph);
        }
    }
}

int main()
{
    int numNodes = 5;
    int numEdges = 6;

    vector<vector<int>> graph(numNodes);
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 4}, {3, 4}};

    for (auto edge : edges)
    {
        int u = edge.first;
        int v = edge.second;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(numNodes, false);
    cout << "DFS traversal: ";
    for (int i = 0; i < numNodes; i++)
    {
        if (!visited[i])
        {
            dfs(i, visited, graph);
        }
    }
    cout << endl;

    return 0;
}
