#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

unordered_set<string> checkset;
unordered_map<string, int> checkmap; // 신고한 사람 / 처리 횟수
unordered_map<string, int> reportcount; // 신고 당한 목록
unordered_map<string, vector<string>> reportlist; // 신고한 사람 목록

using namespace std;

void divide(string source, string& reporter, string& id)
{
	string tempreporter, tempid;
	int size = source.size();
	int idx = 0;

	for (int i = 0; i < size; ++i)
	{
		if (source[i] == ' ')
		{
			idx = i;
			break;
		}

		tempreporter += source[i];
	}

	for (int i = idx + 1; i < size; ++i)
	{
		tempid += source[i];
	}

	reporter = tempreporter;
	id = tempid;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<int> answer;

	for (int i = 0; i < id_list.size(); ++i)
	{
		reportcount.insert({ id_list[i], 0 });
	}

	for (int i = 0; i < report.size(); ++i)
	{
		if (checkset.find(report[i]) != checkset.end())
		{
			continue;
		}

		checkset.insert(report[i]);		

		string reporter, id;
		divide(report[i], reporter, id);

		checkmap.insert({ reporter, 0 });

		reportcount[id] += 1;

		reportlist[id].push_back(reporter);
	}

	for (auto iter = reportlist.begin(); iter != reportlist.end(); ++iter)
	{
		if (reportcount[iter->first] >= k)
		{
			for (int i = 0; i < iter->second.size(); ++i)
			{
				checkmap[iter->second[i]] += 1;
			}
		}
	}

	for (int i = 0; i < id_list.size(); ++i)
	{
		answer.push_back(checkmap[id_list[i]]);
	}

    return answer;
}