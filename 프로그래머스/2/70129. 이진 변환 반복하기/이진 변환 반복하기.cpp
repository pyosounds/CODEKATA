#include <string>
#include <vector>

using namespace std;

string Bin(int n)
{
    string result;
    
    while (n != 0)
    {
        result += to_string(n % 2);
        n /= 2;
    }
    
    return result;
}

vector<int> solution(string s)
{
    vector<int> answer;
    
    int returncnt = 0;
    int returnzero = 0;
    
    while (s != "1")
    {
        ++returncnt;
        
        int one = 0;
        int zerocnt = 0;
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                ++returnzero;
                ++zerocnt;
            }
        }
        
        one = s.size() - zerocnt;
        
        s = Bin(one);
    }
    
    answer.push_back(returncnt);
    answer.push_back(returnzero);
    
    return answer;
}