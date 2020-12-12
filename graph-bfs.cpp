#include <bits/stdc++.h>
using namespace std;
int edge, vertices;
vector<vector<int>> edges;
void graph_bfs(int s)
{
    vector<bool> visited(vertices, false);
    queue<int> qt;
    qt.push(s);
    visited[s] = true;
    while (!qt.empty())
    {
        s = qt.front();
        qt.pop();
        cout << s << " ";
        for (auto list : edges[s])
            if (!visited[list])
            {
                visited[list] = true;
                qt.push(list);
            }
    }
}
int main()
{

    cin >> vertices >> edge;
    edges.resize(vertices);
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
    graph_bfs(x);
    return 0;
}
