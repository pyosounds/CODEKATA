#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    // S = w + h, P = w * p
    double S = (brown - 4) / 2 + 4;
    double P = brown + yellow;

    long long w = static_cast<long long>((S + sqrt(S * S - 4 * P)) / 2);
    long long h = static_cast<long long>((S - sqrt(S * S - 4 * P)) / 2);

    answer.push_back(w);
    answer.push_back(h);

    return answer;
}