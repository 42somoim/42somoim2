#include<iostream>

using namespace std;

int main(void){
	int e, s, m;
	int a, b, c;
	int ans;

	cin >> e >> s >> m;
	a = 0, b = 0, c = 0;
	ans = 0;
	while(e != a || s != b || m != c){
		a++, b++, c++;
		if(a == 16) a = 1;
		if(b == 29) b = 1;
		if(c == 20) c = 1;
		ans++;
	}
	cout << ans;
}
