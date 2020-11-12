#include <stdio.h>

int main(){
	char s[101];
	while (scanf("%10s", s) == 1){
		printf("%s\n", s);
	}
	return 0;
}

// #include <stdio.h>

// int main(){
// 	int i = 0;
// 	char s[101];
// 	scanf("%s", s);
// 	while(s[i]){
// 		if (i && (i % 10 == 0))
// 			printf("\n");
// 		printf("%c", s[i]);
// 		i++;
// 	}
// 	return 0;
// }
