#include <cstdio>
long long gcd(long long a,long long b){return b ? gcd(b, a%b) : a;}
int main(){
	long long a, b, c;
	scanf("%lld %lld", &a, &b);
	c = gcd(a, b);
	for (long long i = 0; i < c; i++)
		printf("1");
	return 0;
}
