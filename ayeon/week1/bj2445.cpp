#include <stdio.h>

int main(){
	int n, i = 1, check = 0;
	scanf("%d", &n);
	while (i){
		if (i == n)	check = 1;
		for (int j = 1; j <= i; j++)
			printf("*");
		for (int k = 1; k <= 2*n-2*i; k++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		if (check)	i--;
		else	i++;
		printf("\n");
	}
	return 0;
}
