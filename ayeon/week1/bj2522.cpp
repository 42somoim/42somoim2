#include <stdio.h>

int main(){
	int n, c = 1, check = 0;
	scanf("%d", &n);
	while (c){
		if (c == n)	check = 1;
		for (int i=1; i<=n-c; i++)
			printf(" ");
		for (int j=1; j<=c; j++)
			printf("*");
		if (check)	c--;
		else	c++;
		printf("\n");
	}
	return 0;
}
