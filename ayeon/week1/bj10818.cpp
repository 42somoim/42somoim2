#include <stdio.h>

int main(){
	int n, num, min = 1000000, max = -1000000;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	printf("%d %d\n", min, max);
	return 0;
}
