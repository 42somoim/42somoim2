#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int N;
	int i, j;
	scanf("%d", &N); i = 1;
	while (i <= N) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
		i++;
	}