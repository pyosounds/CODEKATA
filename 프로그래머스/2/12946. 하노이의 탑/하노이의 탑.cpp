#include <string>
#include <vector>

using namespace std;

void hanoi(int a, int b, int n, vector<vector<int>>& arr)
{
	if (n == 1)
	{
		arr.push_back({ a, b });
		return;
	}

	hanoi(a, 6 - a - b, n - 1, arr);
	arr.push_back({ a, b });
	hanoi(6 - a - b, b, n - 1, arr);
}

vector<vector<int>> solution(int n)
{
	vector<vector<int>> answer;

	hanoi(1, 3, n, answer);

	return answer;
}