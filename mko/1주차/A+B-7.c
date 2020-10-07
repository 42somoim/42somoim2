#include <stdio.h>

int main() {
	int num,i,k=1;
	int a, b;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", k, a + b);
		k++;
	}
}
