#include <stdio.h>

int main(){
	char s[101];
	while (fgets(s, 101, stdin)){
		printf("%s", s);
	}
	return 0;
}
