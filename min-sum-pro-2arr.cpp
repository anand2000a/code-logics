#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, maxi = 0, sum = 0, sign, index = -1, i;
    cin >> n >> k;
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++)
        cin >> arr1[i];
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
        sum += (arr1[i] * arr2[i]);
        if (abs(arr2[i]) > maxi)
        {
            maxi = abs(arr2[i]);
            index = i;
            if (arr2[i] < 0)
                sign = 1;
            else
            {
                sign = -1;
            }
        }
    }
    cout << sum + ((arr1[index] + 2 * k * sign) * (arr2[index])) - ((arr1[index] * arr2[index]));
}