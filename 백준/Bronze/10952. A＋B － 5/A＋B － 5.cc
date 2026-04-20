#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    while (true)
    {
        int A, B;
        cin >> A >> B;

        if (0 == A && 0 == B)
            break;

        cout << A + B << '\n';
    }

    return 0;
}