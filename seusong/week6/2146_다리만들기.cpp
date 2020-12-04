#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#include<cstring>

using namespace std;

int n, min_value;
int island[101][101];
bool visited[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(int flag){
	queue<pair<int, int>> q;
	int ans;

	for(int i = 0; i < n;i++){
		for(int j = 0; j < n;j++){
			if(island[i][j] == flag){
				q.push(make_pair(j, i));
				visited[i][j] = true;
			}
		}
	}
	ans = 0;
	while(q.size()){
		int t = q.size();
		for(int i = 0; i < t;i++){
			int x = q.front().first;
			int y = q.front().second;
			for(int j = 0;j < 4;j++){
				int nx = x + dx[j];
				int ny = y + dy[j];
				if(nx < 0 || nx >= n || ny < 0 || ny >= n || visited[ny][nx]) continue;
				if(island[ny][nx] && island[ny][nx] != flag) return ans;
				else if(!island[ny][nx] && !visited[ny][nx]){
					q.push(make_pair(nx, ny));
					visited[ny][nx] = true;
				}
			}
			q.pop();
		}
		ans++;
	}
	return 1e9;
}
void dfs(int x, int y, int flag){
	if(!island[y][x]) return;
	island[y][x] = flag;
	visited[y][x] = 1;
	for(int i = 0;i < 4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= n || ny >= n || visited[ny][nx]) continue;
		dfs(nx, ny, flag);
	}
}
int main(void){
	int flag, sx, sy;

	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0; j < n;j++){
			cin >> island[i][j];
		}
	}
	flag = 1;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; j++){
			if(island[i][j] && !visited[i][j]){
				dfs(j, i, flag++);
			}
		}
	}
	min_value = 1e9;
	for(int i = 1; i < flag;i++){
		memset(visited, 0, sizeof(visited));
		min_value = min(min_value, bfs(i));
	}
	cout << min_value;
}
