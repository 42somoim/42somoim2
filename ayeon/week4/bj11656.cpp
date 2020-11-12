#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	string str;
	cin >> str;
	vector<string> arr(str.length());
	for (int i = 0; i < str.length(); i++){
		arr[i] = str.substr(i);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < str.length(); i++)
		cout << arr[i] << "\n";
	return 0;
}
