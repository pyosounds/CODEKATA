#include <string>
#include <vector>
#include <cmath>

using namespace std;

int pattern1[5] = { 1, 2, 3, 4, 5 };
int pattern2[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
int pattern3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
int Count[3];

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
        
    int Max = 0;
    
    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == pattern1[i % 5])
        {
            ++Count[0];
        }
        if (answers[i] == pattern2[i % 8])
        {
            ++Count[1];
        }
        if (answers[i] == pattern3[i % 10])
        {
            ++Count[2];
        }
    }
    
    Max = max(max(Count[0], Count[1]), Count[2]);
    
    for (int i = 0; i < 3; ++i)
    {
        if (Max == Count[i])
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}