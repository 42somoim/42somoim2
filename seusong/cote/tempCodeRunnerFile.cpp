#include<bits/stdc++.h>

using namespace std;
bool broken[10];
// 나올 수 있는 채널인지 확인하는 함수.
// 만약 나올 수 없는 채널이면 0을 반환,
// 나올 수 있는 채널이면 그 채널의 길이를 반환한다.
int check_promising(int page){
	int len;

	len = 0;
	if(page == 0 && !broken[page]) return 1;
	while(page){
		if(broken[page % 10]) return 0;
		page /= 10; len++;
	}
	return len;
}
int main(void){
	int n, m, button, min_cnt;

	cin >> n >> m;
	for(int i = 0;i < m; i++){
		cin >> button;
		broken[button] = true;
	}

	// 100에서 시작하는 것을 고려
	min_cnt = abs(n - 100);
	// 브루트 포스(나올 수 있는 모든 채널의 수를 고려한다.)
	// 범위가 50000까지 인데 100000으로 잡은 이유는 -하는 경우도 고려해서 이다.
	// ex) 49999번인데 사용 가능한 버튼이 5뿐이라면 5555에서 가는 것보다 55555에서 가는 것이 더 빠르다.
	for(int i = 0; i <= 100000 ; i++){
		// i에 고장난 버튼이 있을 경우에는 바로 continue(고장난 버튼이 있는 i는 나올 수 없는 값이다.)
		// check_promising(n); -> 고장난 버튼이 있을 경우 0반환, 아니면 그 버튼의 길이 반환
		int len = check_promising(n);
		if(len > 0){
			int tmp = abs(n - i);
			if((tmp + len) < min_cnt)
				min_cnt = (tmp + len);
		}
	}
	cout << min_cnt;
}
