#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;

    int i;

    stack<char> s1;
    while (t--)
    {
        int flag = 0;
        cin >> s;
        stack<char> s1;
        int n = s.length();
        for (i = 0; i < n; i++)
        {
            if (s1.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}'))
            {
                flag = 1;
                break;
            }
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1.push(s[i]);
            }
            if (s[i] == ')')
            {
                if (s1.top() == '(')
                    s1.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (s[i] == ']')
            {
                if (s1.top() == '[')
                    s1.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (s[i] == '}')
            {
                if (s1.top() == '{')
                    s1.pop();
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (!s1.empty() || flag)
            cout << "not balanced\n";
        else
            cout << "balanced\n";
    }
    return 0;
}