#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[1001];
bool visit[1001];
int n;

void dfs(int v){
	visit[v] = true;
	for (int i = 0; i < graph[v].size(); i++){
		int next = graph[v][i];
		if (!visit[next])	dfs(next);
	}
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
	int m, a, b, ans = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= n; i++){
		if (!visit[i]){
			dfs(i);
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}


// #include <stdio.h>

// bool graph[1001][1001];
// bool visit[1001];
// int n;

// void dfs(int v){
// 	visit[v] = true;
// 	for (int i = 1; i <= n; i++)
// 		if (graph[v][i] && !visit[i])	dfs(i);
// }

// int main(){
// 	int m, a, b, ans = 0;
// 	scanf("%d %d", &n, &m);
// 	for (int i = 0; i < m; i++){
// 		scanf("%d %d", &a, &b);
// 		graph[a][b] = graph[b][a] = true;
// 	}
// 	for (int i = 1; i <= n; i++){
// 		if (!visit[i]){
// 			dfs(i);
// 			ans++;
// 		}
// 	}
// 	printf("%d\n", ans);
// 	return 0;
// }
