#include <string>
#include <vector>
#include <regex>

using namespace std;

string arr[4] = { "ayaaya", "yeye", "woowoo", "mama" };

int solution(vector<string> babbling)
{
    int answer = 0;
    
    for (int i = 0; i < babbling.size(); ++i)
    {
        string str = babbling[i];
        
        if (
            str.find(arr[0]) != string::npos || 
            str.find(arr[1]) != string::npos || 
            str.find(arr[2]) != string::npos || 
            str.find(arr[3]) != string::npos)
        {
            continue;
        }
        
        str = regex_replace(str, regex("aya"), " ");
        str = regex_replace(str, regex("ye"), " ");
        str = regex_replace(str, regex("woo"), " ");
        str = regex_replace(str, regex("ma"), " ");
        
        string temp = "";
        
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] != ' ')
            {
                temp += str[i];
            }
        }
        
        if (temp.length() == 0)
        {
            answer += 1;
        }
    }
    
    return answer;
}