#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Xarr[10];
int Yarr[10];
int arr[10];

string solution(string X, string Y)
{
    string answer = "";
    
    for (int i = 0; i < X.size(); ++i)
    {
        Xarr[X[i] - '0'] += 1;
    }
    
    for (int i = 0; i < Y.size(); ++i)
    {
        Yarr[Y[i] - '0'] += 1;
    }
    
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = min(Xarr[i], Yarr[i]);
    }
    
    for (int i = 9; i >= 0; --i)
    {
        for (int j = 0; j < arr[i]; ++j)
        {
            answer += to_string(i);
        }
    }
    
    if (answer.size() == 0)
    {
        answer = "-1";
    }
    
    else if (answer[0] == '0')
    {
        answer = "0";
    }
    
    return answer;
}