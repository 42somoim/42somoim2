#include <stdio.h>

int main() {
	int i,num;
	int a, b;
	int* arr;
	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int)*num);
	for (i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
	}
	for (i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}

}


