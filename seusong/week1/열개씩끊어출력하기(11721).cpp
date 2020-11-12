#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int i;
	char arr[101] = { 0 };
	scanf("%s", &arr);

	for (i = 1; i < 101; i++)
	{
		if (arr[i - 1] == 0)
			break;
		printf("%c", arr[i - 1]);
		if (i % 10 == 0)
			printf("\n");
	}
	printf("\n");
}