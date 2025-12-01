#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> um;

int solution(vector<vector<string>> clothes)
{
	int answer = 1;

	for (int i = 0; i < clothes.size(); ++i)
	{
		if (um.find(clothes[i][1]) == um.end())
		{
			um.insert({ clothes[i][1], 1 });
		}
		else
		{
			um[clothes[i][1]] += 1;
		}
	}

	for (const auto& e : um)
	{
		answer *= 1 + e.second;
	}

	answer -= 1;

	return answer;
}