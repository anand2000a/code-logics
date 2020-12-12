#include <bits/stdc++.h>
using namespace std;
set<string> st;
void solve(string s)
{
    if (s.size() == 0)
        return;
    if (st.find(s) == st.end())
    {
        st.insert(s);
        for (int i = 0; i < s.size(); i++)
        {
            string t = s;
            t.erase(i, 1);
            solve(t);
        }
    }
    return;
}

int main()
{
    string s;
    cin >> s;
    solve(s);
    for (auto str : st)
        cout << str << " ";
    cout << st.size();
    return 0;
}
