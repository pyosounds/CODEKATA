#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    string str = to_string(n);
    
    for (auto iter = str.rbegin(); iter != str.rend(); ++iter)
    {
        answer.push_back(*iter - '0');
    }
    
    return answer;
}