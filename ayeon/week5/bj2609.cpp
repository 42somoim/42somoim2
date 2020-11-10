#include <cstdio>

// 아래 최대공약수 구하는 방법을 함수로 만든 것
int gcd(int x,int y){return y ? gcd(y, x%y) : x;}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	// 최대공약수 구하는 방법
	// int i = a, j = b, c;
	// while (j != 0){
	// 	c = i % j;
	// 	i = j;
	// 	j = c;
	// }
	printf("%d\n%d\n", gcd(a, b), a * b / gcd(a, b));
	return 0;
}
