#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index)
{
    bool check[26] = { 0, };

    string answer = "";

    for (int i = 0; i < skip.size(); ++i)
    {
        check[skip[i] - 'a'] = true;
    }

    for (int i = 0; i < s.size(); ++i)
    {
        int cnt = 0;
        int idx = 1;
        int temp = s[i] - 'a';

        while (idx <= index)
        {
            if (check[(cnt + temp + idx) % 26])
            {
                ++cnt;
            }
            else
            {
                ++idx;
            }
        }

        answer += (temp + (cnt + index) % 26) % 26 + 'a';
    }

    return answer;
}