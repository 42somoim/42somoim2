#include <stdio.h>
#include <string.h>

int main(){
	char n[333334], num[1000000];
	int i, tmp;
	scanf("%s", n);
	if (n[0] == '0'){
		printf("0\n");
		return 0;
	}
	for (i = 0; n[i]!='\0'; i++){
		tmp = n[i] - '0';
		for (int j = 2; j >= 0; j--){
			num[i*3+j] = (tmp % 2) + '0';
			tmp /= 2;
		}
	}
	num[i*3] = '\0';
	i = 0;
	while (num[i] == '0') i++;
	printf("%s\n", num+i);
}
