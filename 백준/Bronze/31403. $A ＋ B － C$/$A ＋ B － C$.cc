#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int A, B, C;
    cin >> A >> B >> C;

    string s = to_string(A) + to_string(B);

    cout << A + B - C << '\n';
    cout << stoi(s) - C << '\n';

    return 0;
}