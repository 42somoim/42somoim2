#include <stdio.h>

int main() {
	int N,n,e=1;
	scanf("%d", &N);
	n = N-1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < n; j++) {
			printf(" "); //공백 출력 
		}
		if (i == 0) printf("*"); // 별 출력 (첫번째줄)  
		else if (i == N - 1) {  // ( 마지막줄 )
			for (int k = 0; k < N * 2 - 1; k++) printf("*");
		}
		else { // 중간 
			printf("*");
			for (int k = 0; k < e; k++) {
				printf(" ");
			}
			printf("*");
			e += 2;
		}
		printf("\n");
		n--;
		
	}
} 
