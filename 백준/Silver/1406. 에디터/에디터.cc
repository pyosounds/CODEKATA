#include <bits/stdc++.h>
using namespace std;

string S;
int M;

list<char> str;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> S >> M;

	int loop = S.size();
	for (int i = 0; i < loop; ++i)
	{
		str.push_back(S[i]);
	}

	list<char>::iterator cursor = str.end();
	while (M--)
	{
		char command;
		cin >> command;

		if ('L' == command)
		{
			if (str.begin() == cursor)
			{
				continue;
			}
			--cursor;
		}
		else if ('D' == command)
		{
			if (str.end() == cursor)
			{
				continue;
			}
			++cursor;
		}
		else if ('B' == command)
		{
			if (str.begin() == cursor)
			{
				continue;
			}
			cursor = str.erase(--cursor);
		}
		else if ('P' == command)
		{
			char c;
			cin >> c;
			cursor = str.insert(cursor, c);
			cursor++;
		}
	}

	cursor = str.begin();
	for (; cursor != str.end(); ++cursor)
	{
		cout << *cursor;
	}
	
	return 0;
}