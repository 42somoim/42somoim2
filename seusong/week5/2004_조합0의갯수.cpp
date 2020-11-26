#include<bits/stdc++.h>

using namespace std;
long long div_val(long long n, int val){
	long long res;

	res = 0;
	for(long long i = val; i <= n ;i *= val)
		res += n / i;
	return res;
}
int main(void){
	long long a, b;

	cin >> a >> b;
	cout << min(div_val(a, 5) - (div_val(b, 5) + div_val(a - b, 5)), div_val(a, 2) - (div_val(b, 2) + div_val(a - b, 2)));
}
