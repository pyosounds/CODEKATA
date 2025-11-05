#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

int solution(vector<int> citations)
{
	for (int i = 0; i <= 10000; ++i)
	{
		int h = i;
		int cited1 = 0;
		int cited2 = 0;

		for (int j = 0; j < citations.size(); ++j)
		{
			if (citations[j] >= h)
			{
				++cited1;
			}
			if (citations[j] <= h)
			{
				++cited2;
			}
		}

		if (cited1 >= h && cited2 <= h)
		{
			arr.push_back(h);
		}
	}

	sort(arr.begin(), arr.end(), greater<>());
    
    if (arr.empty())
    {
        return 0;
    }

	return arr[0];
}