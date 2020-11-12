#include <stdio.h>

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

int main(){
	int n, num[1000], dp1[1000], dp2[1000], max = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		scanf("%d", &num[i]);
		dp1[i] = 1;
		for (int j = 0; j<i; j++){
			if (num[i]>num[j]){
				dp1[i] = MAX(dp1[j]+1, dp1[i]);
			}
		}
	}
	for (int i = n-1; i>=0; i--){
		dp2[i] = 1;
		for (int j = n-1; j>i; j--){
			if (num[i]>num[j]){
				dp2[i] = MAX(dp2[j]+1, dp2[i]);
			}
		}
		max = MAX(max, dp1[i]+dp2[i]-1);
	}
	printf("%d\n", max);
	return 0;
}
