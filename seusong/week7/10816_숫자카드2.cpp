#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int cnt;
vector<int> cards;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, card, left, right, mid, flag;

	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> card;
		cards.push_back(card);
	}
	sort(cards.begin(), cards.end());
	cin >> m;
	for(int i = 0; i < m;i++){
		cin >> card;
		vector<int>::iterator low_iter =  lower_bound(cards.begin(), cards.end(), card);
		vector<int>::iterator upper_iter = upper_bound(cards.begin(), cards.end(), card);
		cout << upper_iter - low_iter << " ";
	}
}
