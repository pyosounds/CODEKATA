#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string sAnswer = to_string(n);
    
    for (int i = 0; i < sAnswer.size(); ++i)
    {
        answer += sAnswer[i] - '0';
    }

    return answer;
}