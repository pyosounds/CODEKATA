#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount)
{
	unordered_map<string, string> enref;
	unordered_map<string, int> total;

	for (int i = 0; i < enroll.size(); ++i)
	{
		enref.insert({ enroll[i], referral[i] });
		total.insert({ enroll[i], 0 });
	}

	for (int i = 0; i < seller.size(); ++i)
	{
		string cur = seller[i];
		int money = amount[i] * 100;

		while (money > 0 && cur != "-")
		{
			int tax = money / 10;
			total[cur] += money - tax;

			money = tax;
			cur = enref[cur];
		}
	}

	vector<int> result;
	result.reserve(enroll.size());

	for (const auto& s : enroll)
	{
		result.push_back(total[s]);
	}

	return result;
}