#include<stdio.h>
int main() {
	int n,i;
	int* arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}

