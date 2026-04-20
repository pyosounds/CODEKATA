#include <bits/stdc++.h>
using namespace std;

int arr[15001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int Count = 0;
    int s = 0;
    int e = N - 1;

    while (s < e)
    {
        if (arr[s] + arr[e] == M)
        {
            ++Count;
            ++s;
        }
        else if (arr[s] + arr[e] < M)
        {
            ++s;
        }
        else if (arr[s] + arr[e] > M)
        {
            --e;
        }
    }

    cout << Count;

    return 0;
}