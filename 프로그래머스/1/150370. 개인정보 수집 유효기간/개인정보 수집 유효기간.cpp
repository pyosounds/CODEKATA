#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, int> Map;

int Date(string s)
{
	int result = 0;

	string y;
	for (int i = 0; i < 4; ++i)
	{
		y += s[i];
	}

	string m;
	m += s[5];
	m += s[6];

	string d;
	d += s[8];
	d += s[9];

	result += stoi(y) * (12 * 28) + (stoi(m) - 1) * 28 + stoi(d);

	return result;
}

void Term(string s)
{
	char type = s[0];
	int exp = 0;

	string temp;
	for (int i = 2; i < s.size(); ++i)
	{
		temp += s[i];
	}

	exp = stoi(temp);

	Map.insert({ type, exp });
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;

	int todaydate = Date(today);

	for (int i = 0; i < terms.size(); ++i)
	{
		Term(terms[i]);
	}

	for (int i = 0; i < privacies.size(); ++i)
	{
		int date = 0;
		char type = privacies[i][11];
		string temp;

		for (int j = 0; j < 10; ++j)
		{
			temp += privacies[i][j];
		}

		date = Date(temp);
		date += Map[type] * 28 - 1;

		if (date < todaydate)
		{
			answer.push_back(i + 1);
		}
	}

    return answer;
}