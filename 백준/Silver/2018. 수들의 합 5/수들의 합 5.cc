#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    int Count = 1;
    int Sum = 1;
    int s = 1;
    int e = 1;

    while (e != N)
    {
        if (Sum == N)
        {
            ++Count;
            ++e;
            Sum += e;
        }
        else if (Sum < N)
        {
            ++e;
            Sum += e;
        }
        else if (Sum > N)
        {
            Sum -= s;
            ++s;            
        }
    }

    cout << Count;

    return 0;
}