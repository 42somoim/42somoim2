#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int parent[10001];
struct vertex
{
	int u, v, weight;
	vertex(int u, int v, int weight){
		this->u = u;
		this->v = v;
		this->weight = weight;
	}
};
int comp(vertex &a, vertex &b){
	return a.weight < b.weight;
}
int find(int u){
	if(u == parent[u]) 	return u;
	return parent[u] = find(parent[u]);
}
void merge(int u, int v){
	u = find(u);
	v = find(v);
	parent[v] = u;
}
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vertex> v;
	int V, E;
	int a, b, c;
	long long ans;

	ans = 0;
	cin >> V >> E;
	for(int i = 0; i < V;i++)
		parent[i] = i;
	for(int i = 0; i < E;i++){
		cin >> a >> b >> c;
		v.push_back(vertex(a, b, c));
	}
	sort(v.begin(), v.end(), comp);
	for(int i = 0; i < v.size(), i++){
		if(find(v[i].u) != find(v[i].v)){
			merge(v[i].u, v[i].v);
			ans += v[i].weight;
		}
	}
}
