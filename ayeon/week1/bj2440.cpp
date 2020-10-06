#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while (n >= 1){
		for (int j = 1; j <= n; j++)
			printf("*");
		printf("\n");
		n--;
	}
	return 0;
}
