#include <iostream>
using namespace std;

int main()
{
    int dp[1000001], number;

    dp[1] = 0;
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
            dp[i] = dp[i / 2] + 1;
        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
            dp[i] = dp[i / 3] + 1;
    }
    cout << dp[number];
    return (0);
}
