#include <cstdio>

int gcd(int a, int b){
	return b ? gcd(b, a % b) : a;
}

int main(){
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", a * b / gcd(a, b));
	}
	return 0;
}
