#include <stdio.h>
#define mod 1000000

int main(void)
{
    char* p;
    char s[5001];
    int len, temp;
    int dp[5001];//자릿수가 5000까지 제공
  
    scanf("%s", s + 1);//1번 색인부터 쓰도록 문자열 대입
    if (*(s + 1) == '0') {//시작 문자가 0이면 알파벳으로 해석 불가
        printf("0\n");
        return 0;
    }
  
    dp[0] = 1;//이번 dp에도 0번 색인을 씀. 자릿수가 2개 이상일 때를 고려해 기본값 1 대입
    dp[1] = 1;//자릿수가 1개라도 있으면 알파벳 a~j로 해석하는 경우의 수 1개 있으니 기본값으로 1 대입
    len = 1;//일단 자릿수 기본값으로 1 대입
    for (p = s + 2; *p != 0; ++p) {//위에서 1번 색인까지 경우의 수 따졌으니 2번 색인부터 경우의 수 계산하기
        dp[++len] = 0;
        if (*p != '0') {//현재 색인 값이 '0'이 아니면 a~j로 해석 가능
            dp[len] = (dp[len] + dp[len - 1]) % mod;
        }
      
        temp = (*(p - 1) - '0') * 10 + (*p - '0');
        if (temp >= 10 && temp <= 26) {//현재 색인과 앞선 색인 값을 합친 결과가 10~26이면 알파벳 해석 가능
            dp[len] = (dp[len] + dp[len - 2]) % mod;
        }
    }
  
    printf("%d\n", dp[len]);
    return 0;
}