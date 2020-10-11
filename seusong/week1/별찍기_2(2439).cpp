#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int i, j, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		j = 0;
		while (j < N)
		{
			if (j >= (N - i - 1))
				printf("*");
			else
				printf(" ");
			j++;
		}
		printf("\n");
	}
}