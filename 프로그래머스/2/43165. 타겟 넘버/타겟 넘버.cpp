#include <string>
#include <vector>

using namespace std;

int answer;

void DFS(const vector<int>& numbers, int target, int idx, int sum)
{
	if (idx == numbers.size())
	{
		if (sum == target)
		{
			++answer;			
		}

		return;
	}

	DFS(numbers, target, idx + 1, sum + numbers[idx]);
	DFS(numbers, target, idx + 1, sum - numbers[idx]);
}

int solution(vector<int> numbers, int target)
{
	DFS(numbers, target, 0, 0);

	return answer;
}