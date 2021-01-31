/*
수묶기_그리디

음수 2개 이상 있을 시 가장 작은 수 두 개 묶어줌
	음수 1개 남아 있을 시 0이 있으면 0과 곱해줌
양수 2개 씩 묶어줌

if(a == 음수, b == 음수)
	묶어줌
else if(a == 음수, b == 0)
	묶어줌
else if(a == 0, b == 양수)

else if(a == 양수, b == 양수)
	곱해주

음수와 양수 처리 따로 => 수열의 크기가 10000보다 작음
음수를 위한 공간, minus[] = 오름차순
양수를 위한 공간, plus[] = 내림차순
 따로 만들어줌.


*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num, zero, sum;
	vector<int> minus;
	vector<int> plus;

	cin >> n;
	zero = 0; sum = 0;
	for(int i = 0; i < n ;i++){
		cin >> num;
		if(num > 0)
			plus.push_back(num);
		else if(num < 0)
			minus.push_back(num);
		else zero = 1;
	}
	sort(plus.begin(), plus.end());
	sort(minus.begin(), minus.end());
	// plus 처리
	if(plus.size() % 2 == 1){
		sum += plus[0];
		for(int i = 1; i < plus.size(); i += 2){
			sum += plus[i] * plus[i + 1];
		}
	}else{
		for(int i = 0; i < plus.size(); i += 2){
			sum += plus[i] * plus[i + 1];
		}
	}
	//
	if(minus.size() % 2 == 1){
		for(int i = 0; i < minus.size() - 1; i += 2){
			sum += minus[i] * minus[i + 1];
		}
		if(!zero) sum += minus[minus.size() - 1];
	}else{
		for(int i = 0; i < minus.size(); i += 2){
			sum += minus[i] * minus[i + 1];
		}
	}
	cout << sum;
}
