#include <bits/stdc++.h>
using namespace std;

stack<int> S;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    while (N--)
    {
        int com;
        cin >> com;

        if (1 == com)
        {
            int X;
            cin >> X;

            S.push(X);
        }
        else if (2 == com)
        {
            if (S.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << S.top() << '\n';
            S.pop();
        }
        else if (3 == com)
        {
            cout << S.size() << '\n';
        }
        else if (4 == com)
        {
            if (S.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (5 == com)
        {
            if (S.empty())
            {
                cout << -1 << '\n';
                continue;
            }

            cout << S.top() << '\n';
        }
    }

    return 0;
}