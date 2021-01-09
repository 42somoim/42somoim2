#include<iostream>

using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, l, ans;

	cin >> n >> m >> k;
	if(n / 2 > m){
		l = m;
	} else l = n / 2;
	n = n - (l * 2);
	m = m - l;
	if(n + m >= k)
		ans = l;
	else {
		ans = l - ((k - (n + m)) / 3);
		if((k - (m + n)) % 3 != 0)
			ans -= 1;
	}
	cout << ans;
}
