#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
	int n;

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int solution(vector<int> arr)
{
	int currentlcm = arr[0];

	for (int i = 1; i < arr.size(); ++i)
	{
		currentlcm = (currentlcm * arr[i]) / GCD(currentlcm, arr[i]);
	}

	return currentlcm;
}