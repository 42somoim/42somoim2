#include <stdio.h>

//그냥 int로 모든 경우를 계산해 버리면 오버플로우 남
//cnt[n] = cnt[n-1]+cnt[n-2]

int cnt[1001];
int main(){
	int n;
	scanf("%d", &n);
	cnt[1] = 1;
	cnt[2] = 2;
	for (int i = 3; i<=n; i++){
		cnt[i] = (cnt[i-1] + cnt[i-2]) % 10007;
	}
	printf("%d\n", cnt[n]);
	return 0;
}
