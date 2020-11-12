#include <stdio.h>

int main(){
	char str[200];
	fgets(str, 200, stdin);
	for (int i = 0; str[i]!='\0'; i++){
		if (('a' <= str[i] && str[i] <= 'm') || ('A' <= str[i] && str[i] <= 'M'))
			str[i] += 13;
		else if (('n' <= str[i] && str[i] <= 'z') || ('N' <= str[i] && str[i] <= 'Z'))
			str[i] -= 13;
	}
	printf("%s\n", str);
	return 0;
}
