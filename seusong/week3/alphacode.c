#include<iostream>

using namespace std;

int main(void) {
	string s;
	long long dp[5001] = { 1, 0 };
	int cnt;

	cin >> s;

	cnt = s.length();
	if(s[0] - '0' > 0) dp[1] = 1;
	for (int i = 2; i <= cnt; i++) {
		if (s[i - 1] - '0' > 0)
			dp[i] += dp[i - 1];
		if (s[i - 2] - '0' > 0 && (((s[i - 2] - '0') * 10 + (s[i - 1] - '0')) <= 26))
			dp[i] += dp[i - 2];
		dp[i] %= 1000000;
	}
	cout << dp[cnt] << "\n";
}
