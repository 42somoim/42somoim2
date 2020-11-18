#include<iostream>
#include<math.h>

using namespace std;

int main(void){
	string s;
	int b, ans, len, i;

	cin >> s >> b;
	ans = 0; i = 0;len = 0;
	for(char c : s) len++;
	while(len > i) {
		if(s[(len - 1) - i] >= '0' && s[(len - 1) - i] <= '9')
			ans += (s[(len - 1) - i] - '0') * pow(b, i);
		else ans += ((s[(len - 1) - i] - 'A') + 10) * pow(b, i);
		i++;
	}
	cout << ans;
}
