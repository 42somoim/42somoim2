#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<long long> cards;

int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, cnt, max, idx;

	cin >> n;
	for(int i = 0; i < n;i++){
		long long num;
		cin >> num;
		cards.push_back(num);
	}
	sort(cards.begin(), cards.end());
	cnt = 1;max = 0; idx = 0;
	for(int i = 0; i < n - 1;i++){
		if(cards[i] == cards[i + 1]){
			cnt++;
			if(max < cnt){
				max = cnt;
				idx = i;
			}
		}else
			cnt = 1;
	}
	cout << cards[idx] << "\n";
}
