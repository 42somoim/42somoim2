// 9465 
#include<iostream>
#include <algorithm>

using namespace std;

// dp[가로 줄 수][위아래]
int dp[100001][2];
int main(void) {
    int n, t;

    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int ans;

        ans = 0;
        cin >> n;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> dp[j][i];
            }
        }
        if (dp[0][0] + dp[1][1] > dp[0][1])
            dp[1][1] = dp[0][0] + dp[1][1];
        if (dp[0][1] + dp[1][0] > dp[0][0])
            dp[1][0] = dp[0][1] + dp[1][0];
        for (int i = 2; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                if (dp[i - 1][1 - j] > dp[i - 2][1 - j])
                    dp[i][j] = dp[i][j] + dp[i - 1][1 - j];
                else
                    dp[i][j] = dp[i][j] + dp[i - 2][1 - j];
            }
        }
        ans = max(dp[n - 1][0], dp[n - 1][1]);
        cout << ans << "\n";
    }
}
