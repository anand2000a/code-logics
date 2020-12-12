#include <bits/stdc++.h>
using namespace std;
#define fr(i, a, b) for (int i = a; i < b; i++)
int m, n;
vector<vector<bool>> visited(1005, vector<bool>(1005, false));
vector<vector<int>> grid(1005, vector<int>(1005, 0));
int maxGoldDfsPath(vector<vector<int>> grid, int i, int j, vector<vector<bool>> visited)
{
	if (i < 0 || i >= m || j >= n || j < 0 || visited[i][j] || grid[i][j] == 0)
		return 0;
	visited[i][j] = true;
	int left = maxGoldDfsPath(grid, i, j - 1, visited);
	int right = maxGoldDfsPath(grid, i, j + 1, visited);
	int up = maxGoldDfsPath(grid, i - 1, j, visited);
	int down = maxGoldDfsPath(grid, i + 1, j, visited);
	visited[i][j] = false;
	return max(left, max(right, max(up, down))) + grid[i][j];
}

int maxGoldDfs(vector<vector<int>> grid)
{
	int gold = 0, i, j;
	int curr = 0;
	fr(i, 0, m)
	{
		fr(j, 0, n)
		{
			if (grid[i][j])
				curr = maxGoldDfsPath(grid, i, j, visited);
			gold = max(curr, gold);
		}
	}
	return gold;
}

int main()
{

	cin >> m >> n;
	fr(i, 0, m)
			fr(j, 0, n)
				cin >>
		grid[i][j];
	cout << maxGoldDfs(grid);
	return 0;
}
