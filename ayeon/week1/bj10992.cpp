#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n-i; j++)
			printf(" ");
		if (i == 1 || i == n){
			for (int k=1; k<2*i; k++)
				printf("*");
		}
		else{
			printf("*");
			for (int k=1; k<2*(i-1); k++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
