#include<iostream>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;

int w, h;
int square[51][51];
int visited[51][51];
int dx[8] = {0, 0, 1, -1, -1, 1, -1, 1};
int dy[8] = {1, -1, 0, 0, -1, -1, 1, 1};

void fn_bfs(int x, int y, int flag){
	queue<pair<int, int>> q;
	visited[y][x] = flag;
	q.push(make_pair(x, y));
	while(q.size()){
		for(int i = 0; i < 8;i++){
			int nx = q.front().first + dx[i];
			int ny = q.front().second + dy[i];
			if(nx >= 0 && nx < w && ny >= 0 && ny < h && !visited[ny][nx] && square[ny][nx]){
				visited[ny][nx] = flag;
				q.push(make_pair(nx, ny));
			}
		}
		q.pop();
	}
}

int main(void){
	while(cin >> w >> h, w || h){
		int flag;

		memset(square, 0, sizeof(square));
		memset(visited, 0, sizeof(visited));
		flag = 1;
		for(int i = 0; i < h;i++){
			for(int j = 0; j < w;j++){
					cin >> square[i][j];
			}
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(!visited[i][j] && square[i][j]){
					fn_bfs(j, i, flag);
					flag++;
				}
			}
		}
		cout << flag - 1 << "\n";
	}
}
