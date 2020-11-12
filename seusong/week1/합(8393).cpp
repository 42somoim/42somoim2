#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int a;
	int i, n;
	scanf("%d", &n);
	a = 0;
	for (i = 0; i <= n; i++)
		a = a + i;
	printf("%d", a);
}