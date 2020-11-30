#include <stdio.h>

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	// for (int i = 2; i <= n; i++){
	// 	int tmp = i;
	// 	while (tmp % 5 == 0){
	// 		tmp /= 5;
	// 		cnt++;
	// 	}
	// }
	cnt = n/5 + n/25 + n/125;
	printf("%d\n", cnt);
	return 0;
}
