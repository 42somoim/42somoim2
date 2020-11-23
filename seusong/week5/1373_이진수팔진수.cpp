#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(void){
	vector<char> nums;
	vector<int> res;
	string n;
	int ans, i;

	cin >> n;
	if(n == "0")
		cout << 0;
	else {
		for(char c : n)
			nums.push_back(c);
		reverse(nums.begin(), nums.end());
		ans = 0; i = 0;
		for(char o : nums){
			ans += (o - '0') * pow(2, i);
			i++;
			if(i == 3) {res.push_back(ans); i = 0;ans = 0;}
		}
		if(ans != 0)
			res.push_back(ans);
		reverse(res.begin(), res.end());
		for(int number : res)
			cout << number;
	}
}
