#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	int loop1 = arr1.size();
	int loop2 = arr2[0].size();
	int loop3 = arr2.size();

	vector<vector<int>> answer(loop1);

	for (int i = 0; i < loop1; ++i)
	{
		for (int j = 0; j < loop2; ++j)
		{
			int Sum = 0;

			for (int k = 0; k < loop3; ++k)
			{
				Sum += arr1[i][k] * arr2[k][j];
			}

			answer[i].push_back(Sum);
		}
	}

	return answer;
}