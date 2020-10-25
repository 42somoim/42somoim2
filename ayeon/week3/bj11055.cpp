#include <stdio.h>

#define MAX(a, b)	(((a)>(b))?(a):(b))

int main(){
	int n, max = 0, num[1000], sum[1000];
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &num[i]);
		sum[i] = num[i];
		for (int j=0; j<i; j++){
			if (num[j]<num[i]){
				sum[i] = MAX(sum[j]+num[i], sum[i]);
			}
		}
		max = MAX(max, sum[i]);
	}
	printf("%d\n", max);
	return 0;
}
