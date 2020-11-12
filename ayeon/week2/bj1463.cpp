#include <stdio.h>
#include <algorithm>
using namespace std;

//0으로 다 초기화 (DP[1] 때문에)
int DP[1000001];
//DP[n] = min(DP[n - 1]+1, DP[n/2]+1, DP[n/3]+1)
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i<=n; i++){
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0)
			DP[i] = min(DP[i], DP[i/2]+1);
		if (i % 3 == 0)
			DP[i] = min(DP[i], DP[i/3]+1);
	}
	printf("%d\n", DP[n]);
	return 0;
}
