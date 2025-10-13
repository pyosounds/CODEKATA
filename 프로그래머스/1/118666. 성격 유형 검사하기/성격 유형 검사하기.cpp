#include <string>
#include <vector>

using namespace std;

int arr[26];
int score1[4] = { 0, 3, 2, 1 };
int score2[4] = { 0, 1, 2, 3 };

char Compare(char c1, char c2)
{
    char returnchar = 0;
    
    if (arr[c1 - 'A'] == arr[c2 - 'A'])
    {
        c1 < c2 ? returnchar = c1 : returnchar = c2;
    }
    else
    {
        arr[c1 - 'A'] > arr[c2 - 'A'] ? returnchar = c1 : returnchar = c2;
    }
    
    return returnchar;
}

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    
    for (int i = 0; i < survey.size(); ++i)
    {
        if (choices[i] != 4)
        {
            int idx = choices[i] / 4;
            int score = 0;
            idx == 0 ? score = score1[choices[i] % 4] : score = score2[choices[i] % 4];
            
            arr[survey[i][idx] - 'A'] += score;
        }
    }
    
    answer += Compare('R', 'T');
    answer += Compare('C', 'F');
    answer += Compare('J', 'M');
    answer += Compare('A', 'N');
    
    return answer;
}