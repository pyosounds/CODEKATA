#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    
    int Min = arr[0];    
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] < Min)
        {
            Min =  arr[i];
        }
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == Min)
        {
            continue;
        }
        
        answer.push_back(arr[i]);
    }
    
    if (answer.size() == 0)
    {
        answer.push_back(-1);
    }
    
    return answer;
}