#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, N,sum=0;
	char arr[101];
	scanf("%d", &N);
	scanf("%s", arr);
	for (i = 0; i < N; i++) {
		sum = sum + arr[i]-48;
	}
	printf("%d", sum);
}

