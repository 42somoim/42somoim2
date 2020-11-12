// 2225
// 합분해
#include<iostream>

using namespace std;

int main(void) {
	int n, k;
	int dp[201][201] = { 1 };

	cin >> n >> k;
	for (int i = 0; i <= n; i++)
		dp[i][2] = i + 1;
	for (int i = 0; i <= n; i++)
		dp[i][1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 3; j <= k; j++) {
			for (int m = 0; m < i; m++)
				dp[i][j] = (dp[i][j] + dp[i - m][j - 1]) % 1000000000;
			dp[i][j] = (dp[i][j] + 1) % 1000000000;
		}
	}
	cout << dp[n][k] % 1000000000 << "\n";
}
