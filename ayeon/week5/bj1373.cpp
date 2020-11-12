#include <stdio.h>
#include <string.h>
// 2진수를 3자리씩 끊으면 8진수임을 이용
int main(){
	char n[1000001];
	scanf("%s", n);
	int len = strlen(n);
	if (len % 3 == 1)
		printf("%d", n[0]-'0');
	else if (len % 3 == 2)
		printf("%d", 2*(n[0]-'0') + (n[1]-'0'));
	for (int i = len%3; i < len ; i += 3)
		printf("%d", 4*(n[i]-'0') + 2*(n[i+1]-'0') + n[i+2]-'0');
}
