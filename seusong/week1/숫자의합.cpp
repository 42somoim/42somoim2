#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	int n, num, sum;

	sum = 0;
	cin >> n;
	while (n--) {
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d\n", sum);
}