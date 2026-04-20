#include <bits/stdc++.h>
using namespace std;

queue<int> Q;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    string com;
    while (N--)
    {
        cin >> com;

        if ("push" == com)
        {
            int X;
            cin >> X;

            Q.push(X);
        }
        else if ("pop" == com)
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if ("size" == com)
        {
            cout << Q.size() << '\n';
        }
        else if ("empty" == com)
        {
            if (Q.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if ("front" == com)
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.front() << '\n';
            }
        }
        else if ("back" == com)
        {
            if (Q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.back() << '\n';
            }
        }
    }

    return 0;
}