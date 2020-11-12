마지막 잔 즉 n번째 잔을 기준으로 n-1잔과 n-2잔, n-3잔 중 더 많은 포도주를 마실 수 있게 하는 두 잔을 고르는 점화식을 세우는 것이 이 문제의 핵심이다.

문제에 나온 예시를 활용해보자. 포도주의 양은 wine[n] = { 6, 10, 13, 9, 8, 1 }로 표현할 수 있다.
n번째 잔까지 마셨을 때 최대로 마실 수 있는 포도주 양은 memo[n]이라 하자. 0번째 잔까지 마시면, 즉 한 잔도 안 마시면 memo[0]이며 값은 0이다.
그럼 1번째 잔까지 마시면 최대로 마실 수 있는 포도주 양은? wine[1]이 memo[1]이 된다.
2번째 잔까지 마셨을 때 memo[2]는 wine[1] + wine[2]이 된다.
3번째 잔까지 마셨을 때 memo[3]는 wine[1] + wine[2]와 wine[1] + wine[3], wine[2] + wine[3] 중 최대 양을 나타내는 걸 고르면 된다.

이걸 정리하면 아래와 같다.
n번째 잔을 마시지 않았을 때: 그전까지 마신 양이 최대 양이므로 memo[n-1]
n번째 잔을 마시고, 바로 직전 잔은 안 마셨을 때: wine[n] + memo[n-2]
n번째 잔을 마시고, 바로 직전 잔도 마시고, 직직전 잔을 안 마셨을 때: wine[n] + wine[n-1] + memo[n-3]

여기까지 보면 나열된 포도주 양을 담는 배열 0번째 색인에 0 값을 추가해야 한다는 것을 알 수 있다. 점화식을 적용한 d[n]에서 1, 2번째 색인은 포도주 배열의 1, 2번째 색인 값을 더한 것이 된다. 그리고 가장 중요한 3번째 색인 이후의 최대 포도주 양을 고르는 공식은 아래처럼 도출할 수 있다.
memo[n] = max(memo[n-1], wine[n] + memo[n-2], wine[n] + wine[n-1] + memo[n-3]);

코드로 정리하면 아래처럼 된다.
//

이 문제를 풀 수 있게 도와준 멋진 블로그 주소는 아래와 같다. 들어가 보면 훨씬 매끄럽게 정리된 설명을 볼 수 있다.
https://debuglog.tistory.com/80

#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n, i, temp;
    int wine[10001];
    int memo[10001] = { 0, };
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        scanf("%d", &wine[i]);
    }
    memo[1] = wine[1];
    memo[2] = wine[1] + wine[2];

    for (i = 3; i <= n; ++i) {
        temp = max(memo[i - 1], wine[i] + memo[i - 2]);
        memo[i] = max(temp, wine[i] + wine[i - 1] + memo[i - 3]);
    }
    printf("%d\n", memo[n]);
    return 0;
}

/*
#include <stdio.h>

int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    return c;
}

int main(void)
{
    int n, i;
    int wine[10001];
    long memo[10001] = { 0, };
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        scanf("%d", &wine[i]);
    }

    memo[1] = wine[1];
    memo[2] = wine[1] + wine[2];
    for (i = 3; i <= n; ++i) {
        memo[i] = max(memo[i - 1], wine[i] + memo[i - 2], wine[i] + wine[i - 1] + memo[i - 3]);
    }
    printf("%ld\n", memo[n]);
    return 0;
}
*/