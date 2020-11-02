#include <stdio.h>

int main(){
	int alpha[27] = {0, };
	char str[101];
	scanf("%s", str);
	for (int i = 0; str[i]!='\0'; i++)
		alpha[str[i]-'a']++;
	for (int i = 0; i < 26; i++)
		printf("%d ", alpha[i]);
	return 0;
}
