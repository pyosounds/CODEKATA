#include <string>
#include <vector>

using namespace std;

string str = "AEIOU";
string check;
int cnt = 0;
int answer = 0;

void DFS(string s)
{
	if (s.size() == 5)
	{
		return;
	}

	for (int i = 0; i < 5; ++i)
	{
		s += str[i];
		++cnt;

		if (s == check)
		{
			answer = cnt;
			return;
		}

		DFS(s);
		s.pop_back();
	}
}

int solution(string word)
{
	check = word;

	DFS("");

	return answer;
}