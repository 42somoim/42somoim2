#include <stdio.h>
#include <algorithm>
using namespace std;

// dp[0][n] = max(dp[1][n-1], dp[1][n-2]) + sc[0][n]
// dp[1][n] = max(dp[0][n-1], dp[0][n-2]) + sc[1][n]

int sc[2][100001], dp[2][100001];

int main(){
	int t, n;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
		scanf("%d", &n);
		for (int j=0; j<2; j++)
			for (int k=0; k<n; k++)
				scanf("%d", &sc[j][k]);
		dp[0][0] = sc[0][0];
		dp[1][0] = sc[1][0];
		dp[0][1] = dp[1][0] + sc[0][1];
		dp[1][1] = dp[0][0] + sc[1][1];
		for (int j=2; j<n; j++){
			dp[0][j] = max(dp[1][j-1], dp[1][j-2]) + sc[0][j];
			dp[1][j] = max(dp[0][j-1], dp[0][j-2]) + sc[1][j];
		}
		printf("%d\n", max(dp[0][n-1], dp[1][n-1]));
	}
	return 0;
}
