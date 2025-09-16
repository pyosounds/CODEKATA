#include <string>
#include <vector>

using namespace std;

string day[12] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
int arr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 11 };
int dp[13] = { 0, };

string solution(int a, int b)
{
    string answer = "";    
    
    for (int i = 1; i < 12; ++i)
    {
        dp[i] = arr[i] + dp[i - 1];
    }
    
    int myday = dp[a - 1] + b;
    answer = day[myday % 7];
    
    return answer;
}