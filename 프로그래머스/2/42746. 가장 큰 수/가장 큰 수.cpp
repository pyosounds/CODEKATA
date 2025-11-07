#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const string& c1, const string& c2)
{
    return (c1 + c2) > (c2 + c1);
}

string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> arr;

    for (int i = 0; i < numbers.size(); ++i)
    {
        arr.push_back(to_string(numbers[i]));
    }

    sort(arr.begin(), arr.end(), Compare);

    for (int i = 0; i < arr.size(); ++i)
    {
        answer += arr[i];
    }

    if (answer[0] == '0')
    {
        return "0";
    }

    return answer;
}