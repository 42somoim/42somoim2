#include<iostream>
#include<stdio.h>
using namespace std;
int n;
int quad[65][65];

bool check(int x, int y, int size){
	int flag;

	flag = quad[y][x];
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size;j++){
			if(flag != quad[i][j]) return false;
		}
	}
	return true;
}
void conquer(int x, int y, int size){
	if(check(x, y, size)){
		cout << quad[y][x];
		return;
	}else{
		size /= 2;
		if(size == 0) return;
		cout << "(";
		conquer(x , y, size);
		conquer(x + size, y, size);
		conquer(x, y + size, size);
		conquer(x + size, y + size, size);
		cout << ")";
	}
}
int main(void){

	scanf("%d", &n);
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n ; j++){
			scanf("%1d", &quad[i][j]);
		}
	}
	conquer(0, 0, n);
}
