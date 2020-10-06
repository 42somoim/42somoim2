#include <stdio.h>

int main(){
	int a, b, n, i;
	scanf("%d", &n);
	i = 1;
	while (i <= n){
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, (a + b));
		i++;
	}
	return 0;
}
