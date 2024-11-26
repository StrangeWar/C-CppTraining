#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> buildGraph(vector<vector<int>> edges, int n)
{

    vector<vector<int>> adjList;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        adjList.push_back(temp);
    }
    for (auto e : edges)
    {
        adjList[e[0]].push_back(e[1]);
        adjList[e[1]].push_back(e[0]);
    }

    return adjList;
}

void printAdj(vector<vector<int>> adj, int n)
{

    for (auto list : adj)
    {
        for (auto node : list)
        {
            cout << node << " ";
        }
        cout << endl;
    }
}

void BFS(vector<vector<int>> Adj, int startpoint, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;
    visited[startpoint] = true;
    q.push(startpoint);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto i : Adj[node])
        {
            if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void DFSRec(vector<vector<int>> adj, int startpoint, vector<bool> &visited){

    visited[startpoint] = true;
    cout << startpoint << " ";

    for(int nbr: adj[startpoint]){
        if(visited[nbr] == false)
            DFSRec(adj, nbr, visited);
        }
    }

void DFS(vector<vector<int>> &adj, int s, int n){
    vector<bool> visited(n, false);
    DFSRec(adj, s, visited);
}


int main()
{

    vector<vector<int>> edges = {{0, 2}, {0, 3}, {1, 3}, {1, 2}, {2, 3}, {3, 7}, {1, 4}, {4, 6}, {5, 4}, {5, 3}};
    int n = 8;

    vector<vector<int>> adj = buildGraph(edges, n);

    DFS(adj, 2, n);

    return 0;
}