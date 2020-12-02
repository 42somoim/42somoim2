#include <iostream>
#include <vector>
using namespace std;

string ans;

void dfs(vector<int> graph[], vector<int>& color, int start){
	for (int i = 0; i < graph[start].size(); i++){
		int next = graph[start][i];
		if (color[start] && color[next] && (color[start] == color[next])){
			ans = "NO";
			break;
		}
		if (!color[next]){
			if (color[start] == 1)	color[next] = 2;
			else	color[next] = 1;
			dfs(graph, color, next);
		}
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int k;
	cin >> k;
	while (k--){
		int v, e;
		cin >> v >> e;
		vector<int> graph[v+1];
        vector<int> color(v+1);
		for (int i = 0; i < e; i++){
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		ans = "YES";
		for (int i = 1; i <= v; i++){
			if (color[i] == 0){
				color[i] = 1;
				dfs(graph, color, i);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
