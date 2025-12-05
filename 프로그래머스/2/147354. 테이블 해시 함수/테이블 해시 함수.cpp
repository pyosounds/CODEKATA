#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcol;

bool Compare(const vector<int>& c1, const vector<int>& c2)
{
	if (c1[gcol - 1] != c2[gcol - 1])
	{
		return c1[gcol - 1] < c2[gcol - 1];
	}
	
	return c1[0] > c2[0];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end)
{
	int answer = 0;

	gcol = col;

	sort(data.begin(), data.end(), Compare);

	for (int i = row_begin; i <= row_end; ++i)
	{
		int temp = 0;

		for (int j = 0; j < data[0].size(); ++j)
		{
			temp += data[i - 1][j] % i;
		}

		answer ^= temp;
	}

	return answer;
}