#include <iostream>
using namespace std;

int main()
{
	int n;
	int dp[100][10] = { 0 };
	int sum = 0;

	cin >> n;
	dp[0][0] = 0;
	for (int i = 1; i < 10; i++)
	{
		dp[0][i] = 1;
	}
	for (int j = 1; j < n; j++)
	{
		dp[j][0] = dp[j - 1][1] ;
		for (int k = 1; k <= 9; k++)
		{
			if (k == 9)
				dp[j][k] = dp[j - 1][k - 1] % 1000000000;
			else
				dp[j][k] = (dp[j - 1][k - 1] + dp[j - 1][k + 1]) % 1000000000;
		}
	}

	for (int i = 0; i <= 9; i++)
	{
		sum = (sum + dp[n - 1][i]) % 1000000000;
	}
	cout << sum;
	return (0);
}