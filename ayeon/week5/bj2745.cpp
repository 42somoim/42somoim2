#include <stdio.h>
#include <string.h>
#define underTen(x)	(('0' <= (x) && (x) <= '9') ? ((x) - '0') : ((x) - 'A' + 10))
int main(){
	char n[1000];
	int b, r = 1, len, ans = 0;
	scanf("%s %d", n, &b);
	len = strlen(n);
	while (--len >= 0){
		ans += underTen(n[len]) * r;
		r *= b;
	}
	printf("%d\n", ans);
}
