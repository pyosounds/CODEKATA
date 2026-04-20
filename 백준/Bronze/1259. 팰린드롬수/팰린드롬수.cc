#include <bits/stdc++.h>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while (true)
	{
		string num;
		cin >> num;
		if ("0" == num)
			break;
		
		int size = num.size();
		bool check = true;

		for (int i = 0; i < size / 2; ++i)
		{
			if (num[i] != num[size - 1 - i])
			{
				check = false;
				break;
			}
		}

		if (check)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}