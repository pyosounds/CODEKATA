#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
    vector<int> answer;

	char arr[51][51] = { 0, };
	int xpos = 0;
	int ypos = 0;

	for (int i = 0; i < park.size(); ++i)
	{
		for (int j = 0; j < park[i].size(); ++j)
		{
			arr[i][j] = park[i][j];

			if (park[i][j] == 'S')
			{
				xpos = i;
				ypos = j;
			}
		}
	}

	for (int i = 0; i < routes.size(); ++i)
	{
		char dir = routes[i][0];
		int step = routes[i][2] - '0';

		int xstep = 0;
		int ystep = 0;

		if (dir == 'E')
		{
			ystep += step;
		}
		else if (dir == 'W')
		{
			ystep -= step;
		}
		else if (dir == 'S')
		{
			xstep += step;
		}
		else if (dir == 'N')
		{
			xstep -= step;
		}

		int tempxpos = xpos + xstep;
		int tempypos = ypos + ystep;

		if (tempxpos < 0 || tempxpos >= park.size() || tempypos < 0 || tempypos >= park[0].size())
		{
			continue;
		}

		// 가는 길에 X 있는지 체크
		bool check = false;

		if (dir == 'E')
		{
			for (int j = 1; j <= ystep; ++j)
			{
				if (arr[xpos][ypos + j] == 'X')
				{
					check = true;
					break;
				}
			}
		}
		else if (dir == 'W')
		{
			for (int j = 1; j <= abs(ystep); ++j)
			{
				if (arr[xpos][ypos - j] == 'X')
				{
					check = true;
					break;
				}
			}
		}
		else if (dir == 'S')
		{
			for (int j = 1; j <= xstep; ++j)
			{
				if (arr[xpos + j][ypos] == 'X')
				{
					check = true;
					break;
				}
			}
		}
		else if (dir == 'N')
		{
			for (int j = 1; j <= abs(xstep); ++j)
			{
				if (arr[xpos - j][ypos] == 'X')
				{
					check = true;
					break;
				}
			}
		}

		if (check)
		{
			continue;
		}

		xpos = tempxpos;
		ypos = tempypos;
	}

	answer.push_back(xpos);
	answer.push_back(ypos);

    return answer;
}