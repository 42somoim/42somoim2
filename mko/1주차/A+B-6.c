#include<stdio.h>

int main() {
	int num, i;
	scanf("%d", &num);
	int a, b;
	for (i = 0; i < num; i++) {
		scanf("%d,%d",&a,&b);
		printf("%d\n", a + b);
	}
}