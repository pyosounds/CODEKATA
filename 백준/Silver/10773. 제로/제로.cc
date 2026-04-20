#include <bits/stdc++.h>
using namespace std;

stack<int> st;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int K; 
	cin >> K;

	long long Sum = 0;
	
	while (K--)
	{
		int num;
		cin >> num;

		if (0 == num)
		{
			Sum -= static_cast<long long>(st.top());
			st.pop();
		}
		else
		{
			st.push(num);
			Sum += static_cast<long long>(num);
		}
	}

	cout << Sum;

	return 0;
}