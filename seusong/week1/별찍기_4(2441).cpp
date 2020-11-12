#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int i, j, N, k;

	k = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		j = 0;
		while (j < N)
		{
			if (k > j)
				printf(" ");
			else
				printf("*");
			j++;
		}
		k++;
		printf("\n");
	}
}