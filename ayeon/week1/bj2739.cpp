#include <stdio.h>

int main(){
	int n, i = 1;
	scanf("%d", &n);
	while (i <= 9){
		printf("%d * %d = %d\n", n, i, (n * i));
		i++;
	}
	return 0;
}
