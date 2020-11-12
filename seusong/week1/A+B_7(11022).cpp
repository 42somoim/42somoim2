#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n, a, b;
	int t;

	cin >> n;
	t = n;
	while (n--)
	{
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", t - n, a, b, a + b);
	}
}