#include <bits/stdc++.h>
using namespace std;
int edge, vertices;
vector<vector<int>> edges;

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
    return 0;
}
