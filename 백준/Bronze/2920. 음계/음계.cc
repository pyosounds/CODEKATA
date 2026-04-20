#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string a = "12345678";
    string d = "87654321";

    string check;

    for (int i = 0; i < 8; ++i)
    {
        int num;
        cin >> num;

        check += to_string(num);
    }

    if (a == check)
    {
        cout << "ascending";
    }
    else if (d == check)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }

    return 0;
}