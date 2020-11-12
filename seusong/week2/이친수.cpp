// 2193
#include<iostream>

using namespace std;

int main(void) {
	int n;
	long long dp[91];

	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << "\n";
}
