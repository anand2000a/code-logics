#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

bool check(int freq[], int k)
{
	for (int i = 0; i < MAX_CHAR; i++)
		if (freq[i] && freq[i] != k)
			return false;
	return true;
}

int substrings(string s, int k)
{
	int res = 0, i, j;
	for (i = 0; s[i]; i++)
	{
		int freq[MAX_CHAR] = {0};
		for (int j = i; s[j]; j++)
		{
			int index = s[j] - 'a';
			freq[index]++;
			if (freq[index] > k)
				break;
			else if (freq[index] == k && check(freq, k) == true)
				res++;
		}
		}
	return res;
}

int main()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	cout << substrings(s, k) << endl;
	return 0;
}
