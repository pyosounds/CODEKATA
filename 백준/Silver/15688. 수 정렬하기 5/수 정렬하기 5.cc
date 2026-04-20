#include <bits/stdc++.h>
using namespace std;

int arr[2000002];
int num;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num;

        arr[num + 1000000] += 1;
    }

    for (int i = 0; i <= 2000000; ++i)
    {
        for (int j = 0; j < arr[i]; ++j)
        {
            cout << i - 1000000 << '\n';
        }
    }

    return 0;
}