#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

void check(string str, int low, int high)
{
    int n = str.length();
    while (low >= 0 && high < n && str[low] == str[high])
    {
        s.insert(str.substr(low, high - low + 1));
        low--, high++;
    }
}

void allPalindromicSubstrings(string str)
{
    int n = str.size(), i;
    for (i = 0; i < n; i++)
    {
        check(str, i, i);
        check(str, i, i + 1);
    }
    for (string i : s)
        cout << i << " ";
}

int main()
{
    string str = "googleogooogoeolsegoooogleslgolsegoooeollgse";
    allPalindromicSubstrings(str);
    return 0;
}
