#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int a, b, i;

	scanf("%d", &a);
	for (i = 1; i <= 9; i++)
	{
		b = a * i;
		printf("%d * %d = %d\n", a, i, b);
	}
}