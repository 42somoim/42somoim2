#include <stdio.h>

int main(){
	int n, i = 1, check = 0;
	scanf("%d", &n);
	while (i){
		if (i == n)	check = 1;
		for (int j=1; j<i; j++)
			printf(" ");
		for (int j=1; j<n * 2 - 2 * (i-1); j++)
			printf("*");
		if (check) i--;
		else	i++;
		printf("\n");
	}
	return 0;
}
