// Implementing Breadth-First Search (BFS) Algorithm for Graph Traversal
#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

void addEdge(vector<list<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
}

void BFS(vector<list<int>> &adj, int s)
{
    int V = adj.size();
    vector<bool> visited(V, false);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        s = q.front();
        cout << s << " ";
        q.pop();

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
}

int main()
{
    int V = 4; // Number of vertices
    vector<list<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);

    cout << "Breadth First Traversal (starting from vertex 2): ";
    BFS(adj, 2);

    return 0;
}