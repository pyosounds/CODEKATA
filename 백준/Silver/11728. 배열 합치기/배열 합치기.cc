#include <bits/stdc++.h>
using namespace std;

int A[1000001];
int B[1000001];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> B[i];
    }

    A[N] = 1000000001;
    B[M] = 1000000001;

    int i = 0, j = 0;

    while (i + j < N + M)
    {
        if (A[i] < B[j])
        {
            cout << A[i++] << ' ';
        }
        else
        {
            cout << B[j++] << ' ';
        }
    }

    return 0;
}