// 11057
#include<iostream>

using namespace std;

int main(void) {
	int n;
	int dp[1001][10];
	int ans = 0;

	cin >> n;
	for (int t = 0; t < 10; t++)
		dp[1][t] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			dp[i][j] = 0;
			for (int k = j; k < 10; k++)
				dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
		}
	}
	for (int i = 0; i < 10; i++) 
		ans += dp[n][i];
	ans %= 10007;
	cout << ans << "\n";
}
