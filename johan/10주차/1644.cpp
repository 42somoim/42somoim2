#include <iostream>
#include <vector>
using namespace std;

vector<int> prime;
long long minFactor[4000001];

void eratosthenes()
{
	minFactor[0] = minFactor[1] = -1;
	for (long long i = 2; i < 4000001; i++)
		minFactor[i] = i;

	for (long long i = 2; i < 4000001; i++)
		if (minFactor[i] == i)
			for (long long j = i * i; j < 4000001; j += i)
				if (minFactor[j] == j)
					minFactor[j] = i;

	for (int i = 2; i < 4000001; i++)
		if (minFactor[i] == i)
			prime.push_back(i);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, low = 0, high = 0, cnt = 0;
	cin >> N;
	eratosthenes();
	int sum = prime[0];
	while (low <= high && high < prime.size() && prime[low] <= N)
	{
		if (sum < N)
			sum += prime[++high];
		else if (sum == N)
		{
			cnt++;
			sum += prime[++high];
		}
		else if (sum > N)
		{
			sum -= prime[low++];
			if (low > high && low < prime.size())
			{
				high = low;
				sum = prime[low];
			}
		}
	}
	cout << cnt << "\n";
	return (0);
}