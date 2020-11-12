#include <stdio.h>

int main(){
	int n, sum = 0, i = 0;;
	char s[101];
	scanf("%d", &n);
	scanf("%s", s);
	while (i < n){
		sum += (s[i] - '0');
		i++;
	}
	printf("%d", sum);
	return 0;
}
