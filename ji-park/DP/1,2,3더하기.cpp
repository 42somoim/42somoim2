#include <iostream>
using namespace std;

int main()
{
	int n;
	int t;
	int dp[10000] = {0};

	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while (n--)
	{
		cin >> t;
		for (int i = 4; i <= t; i++)
		{
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}
		cout << dp[t] << '\n';
	}
	
}