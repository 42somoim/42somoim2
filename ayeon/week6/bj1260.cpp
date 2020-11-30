#include <iostream>
#include <queue>
using namespace std;
#define MAX 1001

int n, m, v;
bool graph[MAX][MAX];
bool visit[MAX];

void dfs(int v){
	cout << v << " ";
	visit[v] = true;
	for (int i = 1; i <= n; i++)
		if (graph[v][i] && !visit[i])	dfs(i);
}

void bfs(int v){
	queue<int> q;
	q.push(v);
	visit[v] = true;
	while(!q.empty()){
		int front = q.front();
		cout << front << " ";
		q.pop();
		for (int i = 1; i <= n; i++){
			if (graph[front][i] && !visit[i]){
				q.push(i);
				visit[i] = true;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> n >> m >> v;
	int a, b;
	for (int i = 0; i < m; i++){
		cin >> a >> b;
		graph[a][b] = graph[b][a] = true;
	}
	dfs(v);
	cout << "\n";
	fill_n(visit, MAX, false);
	bfs(v);
	return 0;
}
