#include<stdio.h>
int main() {
	int a, i, num, max, law;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &a);
		if (i == 0) { max = a; law = a; }
		if (a >= max) max = a;
		if (a <= law) law = a;
	}
	printf("%d %d", law, max);
}