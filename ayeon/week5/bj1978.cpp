#include <stdio.h>

int main(){
	int n, cnt = 0, num, isPrime;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &num);
		isPrime = 0;
		for (int j = 2; j <= num/2; j++){
			if (num % j == 0){
				isPrime++;
				break;
			}
		}
		if (num != 1 && isPrime == 0)	cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
