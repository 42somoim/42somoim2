#include<iostream>
#include<cstring>

using namespace std;
char stars[2200][2200];
void conquer(int x, int y, int size, char c){
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size; j++){
			stars[y][x] = c;
		}
	}
}
void divide(int x, int y, int size){
	if(size == 1){
		 conquer(x, y, size, '*');
	}
	else{
		size /= 3;
		for(int i = 0; i < 3;i++){
			for(int j = 0; j < 3; j++){
				if(i == 1 && j == 1) continue;
				divide(x + (size * j), y + (size * i), size);
			}
		}
	}
}
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;

	cin >> n;
	memset(stars, ' ', sizeof(stars));
	divide(0, 0, n);
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n;j++){
			cout << stars[i][j];
		}
		cout << "\n";
	}
}
