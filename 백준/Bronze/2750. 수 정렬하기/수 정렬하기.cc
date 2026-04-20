#include <bits/stdc++.h>
using namespace std;

bool arr[2002];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    while (N--)
    {
        int num;
        cin >> num;

        arr[num + 1000] = 1;
    }

    for (int i = 0; i <= 2000; ++i)
    {
        if (arr[i])
        {
            cout << i - 1000 << '\n';
        }
    }

    return 0;
}