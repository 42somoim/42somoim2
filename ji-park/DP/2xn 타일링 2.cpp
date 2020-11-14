#include <iostream>
using namespace std;

int main()
{
	int n;
	int dp[10000] = {0};
	dp[1] = 1;
	dp[0] = 1;

	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
	}
	cout << dp[n]<< '\n';
	return (0);
}