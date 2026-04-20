#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    double Sum = 0;
    double M = 0;

    for (int i = 0; i < N; ++i)
    {
        double score;
        cin >> score;

        if (score > M)
        {
            M = score;
        }

        Sum += score;
    }

    double mul = 100 / (M * (double)N);

    cout << setprecision(6) << mul * Sum;

    return 0;
}