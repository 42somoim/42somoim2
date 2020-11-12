// 11722
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
	int n, max_value;
	vector<int> arr(1001);
	vector<int> dp(1001);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		max_value = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] < arr[j] && max_value < dp[j]) {
				max_value = dp[j];
			}
		}
		dp[i] = max_value + 1;
	}
	cout << *max_element(dp.begin(), dp.end()) << "\n";
}
