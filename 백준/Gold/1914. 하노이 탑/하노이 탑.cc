#include <bits/stdc++.h>
using namespace std;

vector<string> arr(101);

void bin(vector<string>& _arr)
{
    _arr[0] = "1";

    for (int i = 1; i <= 100; ++i)
    {
        string result = "";

        int loop = arr[i - 1].size();
        int carry = 0;

        for (int j = 0; j < loop; ++j)
        {
            int num = arr[i - 1][j] - '0';
            num = (num * 2) + carry;
            result += to_string(num % 10);

            num >= 10 ? carry = 1 : carry = 0;
        }

        if (1 == carry)
            result += "1";
        
        _arr[i] = result;
    }
}

void hanoi(int a, int b, int n)
{
    if (1 == n)
    {
        cout << a << ' ' << b << '\n';
        return;
    }

    hanoi(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    hanoi(6 - a - b, b, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N;
    cin >> N;

    if (N <= 20)
    {
        cout << static_cast<int>(pow(2, N)) - 1 << '\n';

        hanoi(1, 3, N);
    }
    else if (N > 20)
    {
        bin(arr);

        arr[N][0] -= 1;

        int loop = arr[N].size();
        for (int i = loop - 1; i >= 0; --i)
        {
            cout << arr[N][i];
        }
        cout << '\n';
    }

    return 0;
}