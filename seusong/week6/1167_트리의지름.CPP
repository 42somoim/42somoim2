#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
vector<pair<int, int>> tr[100001];
bool visited[100001];
int sum[100001];
int n, to, from, len, res, total;
int mPos, mVal;
void bfs(int node){
	queue<int> q;
	q.push(node);
	while(q.size()){
		int parent = q.front();
		visited[parent] = 1;
		for(pair<int, int> p :tr[parent]){
			if(!visited[p.first]){
				q.push(p.first);
				sum[p.first] = sum[parent] + p.second;
				if(mVal < sum[p.first]){
					mVal = sum[p.first];
					mPos = p.first;
				}
			}
		}
		q.pop();
	}
}

int main(void){

	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> to;
		while(true){
			cin >> from;
			if(from == -1) break;
			cin >> len;
			tr[to].push_back(make_pair(from, len));
		}
	}
	bfs(1);
	memset(visited, 0, sizeof(visited));
	memset(sum, 0, sizeof(sum));
	mVal = 0;
	bfs(mPos);
	cout << mVal;
}
