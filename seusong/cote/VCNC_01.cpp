#include<bits/stdc++.h>
using namespace std;
bool visited[101];
vector<int> groups;
void bfs(vector<int> nation[], int n){
	int cnt;

	for(int i = 1; i <= n; i++){
		cnt = 0;
		queue<int> q;
		if(visited[i]) continue;
		q.push(i); visited[i] = true;
		while(q.size()){
			int t = q.front();
			for(int a : nation[t]){
				if(visited[a]) continue;
				q.push(a); visited[a] = true;
			}
			q.pop();
			cnt++;
		}
		groups.push_back(cnt);
	}
}

int solution(int n, vector<vector<int>> nationality){
	int ans;
	vector<int> nation[101];

	ans = 0;
	for(vector<int> v : nationality){
		nation[v[0]].push_back(v[1]); nation[v[1]].push_back(v[0]);
	}
	bfs(nation, n);
	for(int i = 0; i < groups.size();i++){
		for(int j = i + 1; j < groups.size(); j++){
			ans += (groups[i] * groups[j]);
		}
	}
	return ans;
}
