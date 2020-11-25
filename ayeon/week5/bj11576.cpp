#include <stdio.h>

void trans(int num, int B){
	if (num == 0)
		return ;
	trans(num / B, B);
	printf("%d ", num % B);
}

int main(){
	int A, B, m, n, num = 0;
	scanf("%d %d", &A, &B);
	scanf("%d", &m);
	for (int i = 0 ; i < m; i++){
		scanf("%d", &n);
		num = num * A + n;
	}
	trans(num, B);
	return 0;
}
