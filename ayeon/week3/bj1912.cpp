#include <stdio.h>

// dp[i] = max(num[i], dp[i-1] + num[i])

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

int main(){
	int n, num[100001], dp[100001], max = -2147483648;
	scanf("%d", &n);
	dp[0] = 0;
	for (int i = 1; i<=n; i++){
		scanf("%d", &num[i]);
		dp[i] = MAX(num[i], dp[i-1] + num[i]);
		max = MAX(max, dp[i]);
	}
	printf("%d\n", max);
	return 0;
}
