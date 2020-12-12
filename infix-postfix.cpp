#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

int main()
{
    stack<char> s1;
    string s;
    int i = 0;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int len = s.length();

        for (i = 0; i < len; i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '(' || s[i] == ')')
            {

                if (s[i] == '(')
                    s1.push('(');
                else if (s[i] == ')')
                {
                    while (s1.top() != '(' && !s1.empty())
                    {
                        cout << s1.top();
                        s1.pop();
                    }
                    if (s1.top() == '(' && !s1.empty())
                    {
                        // cout << s1.top();
                        s1.pop();
                    }
                }
                else
                {

                    while (!s1.empty() && prec(s[i]) <= prec(s1.top()))
                    {

                        cout << s1.top();
                        s1.pop();
                    }
                    s1.push(s[i]);
                }
            }
            else
                cout << s[i];
        }
        while (!s1.empty())
        {
            if (s1.top() == '(' || s1.top() == ')')
            {
                s1.pop();
            }
            else
            {
                cout << s1.top();
                s1.pop();
            }
        }
        cout << "\n";
    }
    return 0;
}
