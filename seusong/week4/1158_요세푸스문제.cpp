#include<iostream>
#include<vector>

using namespace std;

vector<int> yp;
int cnt[5001];
vector<int> ans;

int main(void){
	int n, k, len, t;

	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		yp.push_back(i);
	t = -1;
	for(int i = 0; i < n; i++){
		len = k;
		while(len){
			t++; t %= n;
			if(!cnt[t])
				len--;
		}
		ans.push_back(yp[t]);
		cnt[t] = 1;
	}
	cout << "<";
	for(int i = 0; i < n;i++){
        cout << ans[i];
        if(i == n - 1)
            break;
        cout << ", ";
    }
	cout << ">"<< "\n";
}
