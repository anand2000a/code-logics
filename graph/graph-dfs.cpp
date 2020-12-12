#include <bits/stdc++.h>
using namespace std;
int edge, vertices;
vector<vector<int>> edges;
vector<bool> visited;
void graph_dfs(int s)
{
    cout << s << " ";
    visited[s] = true;
    for (auto num : edges[s])
        if (!visited[num])
            graph_dfs(num);
}
int main()
{

    cin >> vertices >> edge;
    edges.resize(vertices);
    visited.resize(vertices);
    int i;
    int to, from;
    //populate graph
    for (i = 0; i < edge; i++)
    {
        cin >> from >> to;
        edges[from].push_back(to);
    }
    i = 0;
    //display graph
    for (auto list : edges)
    {
        cout << i;
        for (auto num : list)
            cout << "->" << num;
        cout << "\n";
        i++;
    }
    int x;
    cin >> x;
    graph_dfs(x);
    return 0;
}
