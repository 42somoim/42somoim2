#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int groups[4];

int main(void){
	string s;

	while(getline(cin, s)){
	memset(groups, 0, sizeof(groups));
		for(char c : s){
			if(c >= 'a' && c <= 'z')
				groups[0]++;
			else if(c >= 'A' && c <= 'Z')
				groups[1]++;
			else if(c >= '0'&& c <= '9')
				groups[2]++;
			else if(c == ' ')
				groups[3]++;
		}
		for(int i = 0; i < 4;i++){
			cout << groups[i];
			if(i == 3)break;
			cout << " ";
		}
		cout << "\n";
	}
}
