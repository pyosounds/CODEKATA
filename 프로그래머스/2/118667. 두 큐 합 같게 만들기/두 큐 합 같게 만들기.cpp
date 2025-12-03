#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<int> q1;
queue<int> q2;

void Insert(queue<int>& q, const vector<int>& arr)
{
	for (const auto& e : arr)
	{
		q.push(e);
	}
}

long long Sum(const vector<int>& arr)
{
	long long result = 0;

	for (const auto& e : arr)
	{
		result += e;
	}

	return result;
}

int solution(vector<int> queue1, vector<int> queue2)
{
	int answer = 0;	

	Insert(q1, queue1);
	Insert(q2, queue2);

	long long sum1 = Sum(queue1);
	long long sum2 = Sum(queue2);

	bool check = false;
	int loop = (queue1.size() + queue2.size()) * 2;	

	for (int i = 0; i < loop; ++i)
	{
		if (sum1 == sum2)
		{
			check = true;
			break;
		}
		else
		{
			if (sum1 > sum2)
			{
				q2.push(q1.front());
				sum1 -= q1.front();
				sum2 += q1.front();
				q1.pop();

				++answer;
			}
			else if (sum1 < sum2)
			{
				q1.push(q2.front());
				sum2 -= q2.front();
				sum1 += q2.front();
				q2.pop();

				++answer;
			}
		}
	}

	if (!check)
	{
		answer = -1;
	}

	return answer;
}