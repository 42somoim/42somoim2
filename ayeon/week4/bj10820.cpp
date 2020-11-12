#include <stdio.h>
#include <string.h>

int main(){
	char str[200];
	while (fgets(str, sizeof(str), stdin) != NULL){
		int small = 0, large = 0, num = 0, space = 0;
		for (int i = 0; i < strlen(str); i++){
			if ('a' <= str[i] && str[i] <= 'z') small++;
			else if ('A' <= str[i] && str[i] <= 'Z') large++;
			else if ('0' <= str[i] && str[i] <= '9') num++;
			else if (str[i] == ' ') space++;
		}
		printf("%d %d %d %d\n", small, large, num, space);
	}
	return 0;
}
