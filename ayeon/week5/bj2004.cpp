#include <stdio.h>

#define MIN(x, y)	(((x) > (y)) ? (y) : (x))

int cnt(int n, int x){
	int c = 0;
	for (long long i = x; n/i >= 1; i *= x)
		c += n/i;
	return c;
}

int main(){
	int n, m, two, five;
	scanf("%d %d", &n, &m);
	two = cnt(n, 2) - cnt(n-m, 2) - cnt(m, 2);
	five = cnt(n, 5) - cnt(n-m, 5) - cnt(m, 5);
	printf("%d\n", MIN(two, five));
	return 0;
}
