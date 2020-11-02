// 2133 
// Tri Tiling
#include<iostream>

using namespace std;

int main(void) {
	int n;
	int dp[31] = { 0 };

	dp[0] = 0; dp[1] = 0; dp[2] = 3;
	cin >> n;
	for (int i = 4; i <= n; i += 2) {
		dp[i] += dp[i - 2] * 3;
		for (int k = 4; k <= i; k += 2) {
			dp[i] += dp[i - k] * 2;
		}
		dp[i] += 2;
	}
	cout << dp[n] << '\n';
}
