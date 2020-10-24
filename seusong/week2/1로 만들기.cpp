#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int dp[1000001] = { 0 };

	cin >> n;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		if (i % 2 == 0 && i % 3 == 0)
			dp[i] = min(dp[i - 1] + 1, min(dp[i / 2] + 1, dp[i / 3] + 1));
		else if (i % 2 == 0)
			dp[i] = min(dp[i - 1] + 1, dp[i / 2] + 1);
		else if (i % 3 == 0)
			dp[i] = min(dp[i - 1] + 1, dp[i / 3] + 1);
		else
			dp[i] = dp[i - 1] + 1;
	}
	cout << dp[n];
}