using namespace std;

int GCD(int a, int b)
{
	int n;

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

long long solution(int w, int h)
{
	long long answer = static_cast<long long>(w);
	answer *= static_cast<long long>(h);
	answer -= static_cast<long long>(w + h) - GCD(w, h);

	return answer;
}