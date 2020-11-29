#include<iostream>
#include<vector>
#include<queue>
#include<set>

using namespace std;

bool check[1001];
vector<int> vg[1001];

int main(void){
	int n, m, u, v, ans;
	set<int> se;
	queue<int> q;

	cin >> n >> m;
	for(int i = 0; i < m;i++){
		cin >> u >> v;
		vg[u].push_back(v);vg[v].push_back(u);
		se.insert(u); se.insert(v);
	}
	ans = 0;
	if(n != 1)
	{
		for(auto it = se.begin(); it != se.end();it++){

			if(check[*it])
				continue;
			q.push(*it);check[*it] = true;
			while(q.size()){
				for(int j = 0; j < vg[q.front()].size();j++){
					int tmp = vg[q.front()][j];
					if(!check[tmp]){
						q.push(tmp);
						check[tmp] = true;
					}
				}
				q.pop();
			}
			ans++;
		}
	}
	cout << ans;
}
