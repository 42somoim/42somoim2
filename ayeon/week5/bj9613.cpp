#include <cstdio>

int gcd(int a, int b){return (b ? gcd(b, a%b) : a);}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, num[101];
		long long sum = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
			scanf("%d", &num[j]);
		for (int j = 1; j < n; j++){
			for (int k = 0; k < j; k++)
				sum += gcd(num[j], num[k]);
		}
		printf("%lld\n", sum);
	}
	return 0;
}
