#include <stdio.h>

int main(){
	int n;
	bool num[1000001];
	num[1] = true;
	for (int i = 2 ; i * i <= 1000000; i++){
		if (num[i] == 1)
			continue;
		for (int j = i + i; j <= 1000000; j += i)
			num[j] = true;
	}
	while (1){
		int check = 0;
		scanf("%d", &n);
		if (n == 0)	break;
		for (int i = 3; i <= n/2; i++){
			if (!num[i] && !num[n-i]){
				check = 1;
				printf("%d = %d + %d\n", n, i, n-i);
				break;
			}
		}
		if (check == 0)
			printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}
