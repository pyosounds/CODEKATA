#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
	int answer = 0;
	stack<int> basket;

	for (int i = 0; i < moves.size(); ++i)
	{
		int idx = moves[i] - 1;
		int size = board.size();

		for (int j = 0; j < size; ++j)
		{
			if (board[j][idx])
			{
				if (!basket.empty() && basket.top() == board[j][idx])
				{
					answer += 2;
					basket.pop();
				}
				else
				{
					basket.push(board[j][idx]);
				}

				board[j][idx] = 0;
				break;
			}
		}
	}

	return answer;
}