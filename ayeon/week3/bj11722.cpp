#include <stdio.h>

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))

int main(){
	int n, num[1000], res[1000], max = 0;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &num[i]);
		res[i] = 1;
		for (int j=0; j<i; j++){
			if (num[i] < num[j]){
				res[i] = MAX(res[i], res[j]+1);
			}
		}
		max = MAX(max, res[i]);
	}
	printf("%d\n", max);
	return 0;
}
