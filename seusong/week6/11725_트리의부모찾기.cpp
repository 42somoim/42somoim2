#include<iostream>
#include<vector>
using namespace std;
int rootNode[100001];
vector<int> tree[100001];
void traversal(int node){
	for(int i = 0; i < tree[node].size();i++){
		int next = tree[node][i];
		if(!rootNode[next]){
			rootNode[next] = node;
			traversal(next);
		}
	}
}
int main(void){
	int n, v1, v2;
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> v1 >> v2;
		tree[v1].push_back(v2); tree[v2].push_back(v1);
	}
	rootNode[1] = -1;
	traversal(1);
	for(int i = 2; i <= n; i++)
		cout << rootNode[i] << "\n";

}
