#include <bits/stdc++.h>
using namespace std;

int arr[2001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    int Count = 0;

    for (int i = 0; i < N; ++i)
    {
        int Check = arr[i];
        int s = 0;
        int e = N - 1;

        while (s < e)
        {
            if (arr[s] + arr[e] == Check)
            {
                if (s != i && e != i)
                {
                    ++Count;
                    break;
                }
                else if (s == i)
                {
                    ++s;
                }
                else if (e == i)
                {
                    --e;
                }
            }
            else if (arr[s] + arr[e] < Check)
            {
                ++s;
            }
            else if (arr[s] + arr[e] > Check)
            {
                --e;
            }
        }
    }

    cout << Count;

    return 0;
}