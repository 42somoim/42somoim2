#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
int area[1001];

void dfs(int p, int flag, vector<int> g[1001]){
	if(area[p]) return;
	area[p] = flag;
	for(int i = 0; i < g[p].size();i++){
		dfs(g[p][i], flag, g);
	}
}
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;
	while(t--){
		int n, v, flag;
		vector<int> g[1001];

		cin >> n;
		memset(area, 0, sizeof(area));
		for(int i = 1; i <= n; i++){
			cin >> v; g[i].push_back(v);
		}
		flag = 1;
		for(int i = 1; i <= n; i++){
			if(area[i]) continue;
			dfs(i, flag, g);
			flag++;
		}
		cout << flag - 1 << "\n";
	}
}
