#include <bits/stdc++.h>
using namespace std;

int N;
set<string> ss;
vector<string> arr;

bool Compare(const string& c1, const string& c2)
{
    if (c1.size() != c2.size())
    {
        return c1.size() < c2.size();
    }
    else
    {
        return c1 < c2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;

        ss.insert(str);
    }

    set<string>::iterator iter = ss.begin();
    for (; iter != ss.end(); ++iter)
    {
        arr.push_back(*iter);
    }

    sort(arr.begin(), arr.end(), Compare);

    int loop = arr.size();
    for (int i = 0; i < loop; ++i)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}