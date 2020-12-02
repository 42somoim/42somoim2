#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
vector<int> visited;
vector<int> first;
vector<int> g;

int dfs(int idx, int flag, int cnt){
	if(visited[idx]){
		if(first[idx] != flag)
			return 0;
		return cnt - visited[idx];
	}
	visited[idx] = cnt;
	first[idx] = flag;
	return dfs(g[idx], flag, cnt + 1);
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;

	cin >> t;
	while(t--){

		int ans, n, v1;

		cin >> n;
		g = vector<int> (n+1, 0);
		first = vector<int> (n+1, 0);
		visited = vector<int> (n+1, 0);
		for(int i = 1; i <= n;i++){
			cin >> v1;
			g[i] = v1;
		}
		ans = 0;
		for(int i = 1; i <= n;i++){
			if(!visited[i])
				ans += dfs(i, i, 1);
		}
		cout << n - ans << "\n";
	}
}
