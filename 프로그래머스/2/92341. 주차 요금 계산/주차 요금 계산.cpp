#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <cmath>

using namespace std;

unordered_map<string, int> Map; // 차 번호, 입차 시간
map<string, int> Map2; // 차 번호, 시간 누적

void split(string str, int& t, string& l, string& io)
{
	string hour, minute; 
	hour += str[0];
	hour += str[1];
	minute += str[3];
	minute += str[4];

	int time = stoi(hour) * 60 + stoi(minute);

	string lnumber;
	lnumber += str[6];
	lnumber += str[7];
	lnumber += str[8];
	lnumber += str[9];

	string inout;
	if (str.size() == 13)
	{
		inout = "IN";
	}
	else
	{
		inout = "OUT";
	}

	t = time;
	l = lnumber;
	io = inout;
}

vector<int> solution(vector<int> fees, vector<string> records)
{
	vector<int> answer;	

	for (auto& e : records)
	{
		int time = 0;
		string lnumber;
		string inout;

		split(e, time, lnumber, inout);

		if (inout == "IN")
		{
			Map.insert({ lnumber, time });
			Map2.insert({ lnumber, 0 });
		}
		else if (inout == "OUT")
		{
			int temptime = time - Map[lnumber];
			Map2[lnumber] += temptime;

			Map.erase(lnumber);
		}
	}

	for (auto& e : Map)
	{
		string lnumber = e.first;
		int time = 1439 - e.second;

		Map2[lnumber] += time;
	}

	for (auto& e : Map2)
	{
		int fee = fees[1];

		if (e.second > fees[0])
		{
			double time = e.second - fees[0];

			time = ceil(time / fees[2]);

			fee += time * fees[3];
		}

		answer.push_back(fee);
	}

	return answer;
}