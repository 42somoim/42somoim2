#include <stdio.h>

// stack문제지만 stack를 쓰지 않고 푼 풀이

int main(){
	int s = 0, cnt = 0;
	char str[100001];
	scanf("%s", str);
	for (int i = 0; str[i]; i++){
		if (str[i] == '(')	s++;
		else{
			s--;
			if (str[i-1] == '(')	cnt += s;
			else	cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
