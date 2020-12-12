#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long n, i, j;
        cin >> n;
        long long int arr[n];
        long long int ans[n];
        stack<long long int> s;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans[i] = -1;
        }

        j = 0;
        s.push(0);
        s.push(arr[0]);
        for (i = 1; i < n; i++)
        {
            if (s.empty())
            {
                s.push(i);
                s.push(arr[i]);
                continue;
            }

            while (!s.empty() && s.top() < arr[i])
            {

                long long int m = s.top();
                s.pop();
                ans[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
            s.push(arr[i]);
        }

        for (i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}