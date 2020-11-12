#include <stdio.h>

//dp[i] = max(dp[i-2]+num[i], dp[i-3]+num[i-1]+num[i])

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

int main(){
	int n, num[301], dp[301];
	scanf("%d", &n);
	for (int i = 1; i<=n; i++)
		scanf("%d", &num[i]);
	dp[0] = 0;
	dp[1] = num[1];
	dp[2] = num[1] + num[2];
	for (int i = 3; i<=n; i++){
		dp[i] = MAX(dp[i-2], dp[i-3]+num[i-1]) + num[i];
	}
	printf("%d\n", dp[n]);
	return 0;
}
