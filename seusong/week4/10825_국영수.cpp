#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct P{
	string name;
	int kor, eng, math;
};

bool comp(const P &a,const P &b){
	if(a.kor > b.kor)
		return true;
	else if(a.kor == b.kor){
		if(a.eng < b.eng)
			return true;
		else if(a.eng == b.eng){
			if(a.math > b.math)
				return true;
			else if(a.math == b.math){
				if(a.name < b.name)
					return true;
			}
		}
	}
	return false;
}

int main(void){
	int n;
	vector<P> group;

	cin >> n;
	for(int i = 0; i < n;i++){
		string nm;
		int k, e, m;
		cin >> nm >> k >> e >> m;
		group.push_back({nm, k, e, m});
	}
	stable_sort(group.begin(), group.end(), comp);
	for(P a : group){
		cout << a.name << "\n";
	}
}
