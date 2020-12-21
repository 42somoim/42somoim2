#include<iostream>
using namespace std;
int n;
string q[64];
void conquer(int x, int y, int size){
	int cnt;

	cnt = 0;
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size;j++){
			cnt+=(q[i][j]!=q[y][x]);
		}
	}
	if(cnt) {
			size /= 2;
			cout << '(';
			conquer(x , y, size);
			conquer(x + size, y, size);
			conquer(x, y + size, size);
			conquer(x + size, y + size, size);
			cout << ')';
	} else cout << q[y][x];
}
int main(void){
	cin >> n;
	for(int i = 0; i < n;i++)
		cin >> q[i];
	conquer(0, 0, n);
	}
