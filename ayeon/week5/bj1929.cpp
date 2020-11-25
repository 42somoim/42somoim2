#include <iostream>
using namespace std;
// 소수찾기
// 에라토스테네스의 체
// 단순 체크용 배열을 사용할 땐 int형보다 bool형을 쓰면 메모리가 훨씬 적게든다.
int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int m, n;
	bool *num;
	cin >> m >> n;
	num = new bool[n + 1];
	num[1] = true;
	for (int i = 2 ; i * i <= n; i++){
		if (num[i] == true)
			continue;
		for (int j = i + i; j <= n; j += i)
			num[j] = true;
	}
	for (int i = m; i <= n; i++){
		if (num[i] == false)
			cout << i << "\n";
	}
	return 0;
}
