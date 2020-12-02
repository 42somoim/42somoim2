#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
int visited[100001];
int g[100001];
int ans;

void dfs(int idx, int flag, int cnt){
	if(idx == flag) {ans += cnt; return;}
	if(visited[idx]) return;
	visited[idx] = 1;
	dfs(g[idx], flag, cnt + 1);
}
int main(void){
	int t;

	cin >> t;
	while(t--){
		int n, v1;

		memset(g, 0, sizeof(g));
		memset(visited, 0, sizeof(visited));
		cin >> n;
		for(int i = 1; i <= n;i++){
			cin >> v1;
			g[i] = v1;
		}
		ans = 0;
		for(int i = 1; i <= n;i++){
			dfs(g[i], i, 1);
		}
		cout << n - ans << "\n";
	}
}
