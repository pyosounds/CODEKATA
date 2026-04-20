#include <bits/stdc++.h>
using namespace std;

int N, M;
map<int, int> card;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    while (N--)
    {
        int num;
        cin >> num;

        // 처음으로 들어옴
        if (card.end() == card.find(num))
        {
            card.insert({ num, 1 });
        }
        // 기존에 존재
        else
        {
            card.find(num)->second += 1;
        }
    }

    cin >> M;

    while (M--)
    {
        int num;
        cin >> num;

        // 없으면 0 출력
        if (card.end() == card.find(num))
        {
            cout << 0 << ' ';
        }
        // 있으면 개수 출력
        else
        {
            cout << card.find(num)->second << ' ';
        }
    }

    return 0;
}