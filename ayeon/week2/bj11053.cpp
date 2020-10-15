#include <stdio.h>

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

int num[1000], dp[1000];

int main(){
	int n, res = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i<n; i++){
		dp[i] = 1;
		for (int j = 0; j<i; j++){
			if (num[i]>num[j]){
				dp[i] = MAX(dp[j]+1, dp[i]);
			}
		}
		res = MAX(res, dp[i]);
	}
	printf("%d\n", res);
	return 0;
}
