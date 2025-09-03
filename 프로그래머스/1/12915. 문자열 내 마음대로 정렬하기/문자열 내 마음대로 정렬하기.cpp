#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx;

bool Compare(const string& c1, const string& c2)
{
    if (c1[idx] != c2[idx])
    {
        return c1[idx] < c2[idx];
    }
    else
    {
        return c1 < c2;
    }
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    idx = n;
    
    sort(strings.begin(), strings.end(), Compare);
    
    answer = strings;
    
    return answer;
}