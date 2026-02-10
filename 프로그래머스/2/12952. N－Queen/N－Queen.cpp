#include <string>
#include <vector>

using namespace std;

int N, Count;
bool IsUsed1[40];
bool IsUsed2[40];
bool IsUsed3[40];

void NQueen(int C)
{
	if (N == C)
	{
		++Count;
		return;
	}

	for (int i = 0; i < N; ++i)
	{
		if (IsUsed1[i] || IsUsed2[i + C] || IsUsed3[C - i + N - 1])
		{
			continue;
		}

		IsUsed1[i] = true;
		IsUsed2[i + C] = true;
		IsUsed3[C - i + N - 1] = true;

		NQueen(C + 1);

		IsUsed1[i] = false;
		IsUsed2[i + C] = false;
		IsUsed3[C - i + N - 1] = false;
	}
}

int solution(int n)
{
	int answer = 0;

	N = n;

	NQueen(0);

	return Count;
}