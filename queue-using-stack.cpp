#include <bits/stdc++.h>
using namespace std;
/*Implement queue using stacks*/
/*Stack s1's top is queue rear and my s1 is the representation of queue*/

stack<int> s1, s2;
int qpop()
{
    if (s1.empty())
        return -1;
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    int m = s2.top();
    s2.pop();
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return m;
}
void qpush(int x)
{
    s1.push(x);
}

void pqueue()
{
    stack<int> s3(s1);
    if (s3.empty())
        cout << "\nQueue is empty";
    else
    {
        while (!s3.empty())
        {
            s2.push(s3.top());
            s3.pop();
        }
        while (!s2.empty())
        {
            cout << s2.top() << " ";
            s2.pop();
        }
    }
}
int main()
{
    cout << "1. To insert into queue\n2. TO delete from queue\n3. To display queue\nEnter zero to exit\nEnter choice: ";
    int ch;
    cin >> ch;
    int ok;
    while (ch)
    {
        if (ch == 1)
        {
            cout << "Enter : ";
            cin >> ok;
            qpush(ok);
        }
        if (ch == 2)
        {

            cout << "\nElement deleted" << qpop();
        }
        if (ch == 3)
        {
            pqueue();
        }
        cin >> ch;
    }

    return 0;
}