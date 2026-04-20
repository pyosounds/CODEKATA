#include <bits/stdc++.h>
using namespace std;

string S;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    getline(cin, S);

    int loop = S.size();
    int cnt = 0;
    bool check = true;

    for (int i = 0; i < loop; ++i)
    {
        if (' ' == S[i])
        {
            check = true;
        }
        else
        {
            if (check)
            {
                check = false;
                ++cnt;
            }
        }
    }

    cout << cnt;

    return 0;
}