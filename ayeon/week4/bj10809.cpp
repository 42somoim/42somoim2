#include <stdio.h>

int main(){
	int alpha[27] = {0, };
	char str[101];
	scanf("%s", str);
	for (int i = 0; str[i]!='\0'; i++){
		if (alpha[str[i]-'a'] == 0)
			alpha[str[i]-'a'] = i + 1;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alpha[i] - 1);
	return 0;
}
