//code by - anand2000

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (i = a; i < b; i++)
#define fr1(i, a, b) for (i = a; i >= b; i--)
#define inf LLONG_MAX
#define first fi
#define second se

/*-------Code Goes Here-------*/

vector<vector<int>> edges = {{1, 2}, {3}, {1, 3}, {}};
vector<vector<int>> allPaths()
{
    queue<vector<int>> q;
    q.push(edges[0]);
    while (!q.empty())
    {
        }
}
int main()
{
    fast;
    vector<vector<int>> ans;
    ans = allPaths(edges);
    return 0;
}
