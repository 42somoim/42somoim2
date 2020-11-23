#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
	string s;
	vector<vector<int>> number_string;
	cin >> s;
	if(s == "0")
		cout << 0;
	else
	{
			for(char c : s){
			int number = c -'0';
			int flag = 3;
			vector<int> nums;

			while(number){
				nums.push_back(number % 2);
				number /= 2;
				flag--;
			}
			while(flag)
				{nums.push_back(0);flag--;}
			reverse(nums.begin(), nums.end());
			number_string.push_back(nums);
		}
		while(number_string[0][0] == 0)
			number_string[0].erase(number_string[0].begin());
		for(vector<int> v : number_string){
			for(int a : v)
				cout << a;
		}
	}
}
