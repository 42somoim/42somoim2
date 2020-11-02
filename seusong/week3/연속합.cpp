//2011 연속합
#include<stdio.h>

#pragma warning(disable:4996)

int main()
{
	int i, N, input;
	int max, sum, result;

	sum = 0;
	max = 0;
	result = -1001;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input);
		sum += input;
		if (sum <= 0)
		{
			if(sum > result)
			 result = sum;

			sum = 0;
		}
		if (sum > max)
			max = sum;
	}
	if (max != 0)
		printf("%d\n", max);
	else if (max == 0)
		printf("%d\n", result);
}
