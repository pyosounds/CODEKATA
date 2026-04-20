#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string N;
    cin >> N;

    int loop = N.size();
    for (int i = 0; i < loop; ++i)
    {
        arr.push_back(N[i] - '0');
    }

    sort(arr.begin(), arr.end(), greater<>());

    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << arr[i];
    }

    return 0;
}