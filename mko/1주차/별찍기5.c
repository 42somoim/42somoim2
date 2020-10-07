#include<stdio.h>
int main() {
	int i, j,k,n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		k = 2 * i + 1;
		for (j = 0; j < 2*n-1; j++) {
			if (j < (2*n-1 - k) / 2)
				printf(" ");
		}
		for (j = 0; j < k; j++) {
			printf("*");
		}
		printf("\n");
	}
}