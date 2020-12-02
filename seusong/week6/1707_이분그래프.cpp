#include<bits/stdc++.h>

using namespace std;

int color[20001];
vector<int> graph[20001];

int bfs(int n, int flag){
	queue<int> q;
	q.push(n);
	while(q.size()){
		int t = q.size();
		while(t--){
			int tmp = q.front();
			if(color[tmp] == 0)
			{
				color[tmp] = flag;
				for(int i = 0; i < graph[tmp].size();i++)
					q.push(graph[tmp][i]);
			}
			else if(color[tmp] != flag) return 0;
			q.pop();
		}
		flag *= -1;
	}
	return 1;
}
int main(void){
	int k;

	cin >> k;
	while(k--){
		int v, e, v1, v2, flag;
		set<int> se;
		set<int>::iterator it;

		memset(color, 0, sizeof(color));
		memset(graph, 0, sizeof(graph));
		cin >> v >> e;
		for(int i = 0; i < e ;i++){
			cin >> v1 >> v2;
			graph[v1].push_back(v2); graph[v2].push_back(v1);
			se.insert(v1); se.insert(v2);
		}
		flag = 0;
		for(it = se.begin(); it != se.end();it++){
			if(color[*it]) continue;
			if(!bfs(*it, 1)) break;
		}
		if(it == se.end())
			cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
