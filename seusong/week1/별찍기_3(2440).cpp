#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int i, N, a;

	scanf("%d", &N);
	for (i = N; i > 0; i--) {
		a = i;
		i = 0;
		while (i < a) {
			printf("*");
			i++;
		}
		printf("\n");
	}
}