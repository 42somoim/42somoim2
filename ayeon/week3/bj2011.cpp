#include <stdio.h>
#include <string.h>

int main(){
	int c, dp[5001] = {1, 0};
	char s[5001];
	scanf("%s", s);
	for(int i = 1; i<=strlen(s); i++){
		c = s[i - 1]-'0';
		if (c != 0)
			dp[i] = dp[i-1];
		if (i == 1)
			continue;
		c = (s[i-2]-'0')*10 + (s[i-1]-'0');
		if (10<=c && c<=26)
			dp[i] = (dp[i] + dp[i-2]) % 1000000;
	}
	printf("%d\n", dp[strlen(s)]);
	return 0;
}
