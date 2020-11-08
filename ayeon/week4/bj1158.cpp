#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n, k, pos = 0;
	scanf("%d %d", &n, &k);
	vector<int> v;
	for (int i=1; i<=n; i++)
		v.push_back(i);
	printf("<");
	while (!v.empty()){
		pos = (pos + k - 1) % v.size();
		if (v.size() != 1) printf("%d, ", v[pos]);
		else printf("%d>\n", v[pos]);
		v.erase(v.begin() + pos);
	}
	return 0;
}
