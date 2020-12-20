#include<iostream>
#include<vector>
using namespace std;
int n;
int papers[2200][2200];
int ans[3];
// 종이에 다 똑같은 값이 있는지 체크하는 함수
bool checkPaper(int x_s, int y_s, int size){
	int flag;

	flag = papers[y_s][x_s];
	for(int i = y_s;i < y_s + size;i++){
		for(int j = x_s;j < x_s + size;j++){
			if(flag != papers[i][j])
				return false;
		}
	}
	return true;
}
void divideConquer(int x_s, int y_s, int size){
	if(checkPaper(x_s, y_s, size)){
		ans[papers[y_s][x_s]]++;
		return;
	}else{
		size /= 3;
		if(size == 0) return;
		for(int i = 0; i < 3;i++){
			for(int j = 0; j < 3;j++){
				divideConquer(x_s + (size * j), y_s + (size * i), size);
			}
		}
	}
}
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n;j++){
			cin >> papers[i][j];
			papers[i][j]++;
		}
	}
	divideConquer(0, 0, n);
	cout << ans[0] << "\n" << ans[1] << "\n" << ans[2];
}
