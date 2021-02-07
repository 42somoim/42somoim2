// �簢���� �� ���� ���簢������ ������ ��� ����� �� �غ���
// ���?
// �� 6������ ������� ���簢���� �� ����ϴ� ������� ����

#include<iostream>

using namespace std;
int square[101][101];
int ans;
int getSum(int x1, int y1, int x2, int y2){
	int res;

	res = 0;
	for(int i = y1; i < y2; i++){
		for(int j = x1; j < x2; j++){
				res += square[i][j];
		}
	}
	return res;
}
int main(void){
	int n, m;
	int sq1, sq2, sq3;
	cin >> n >> m;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			char c;
			cin >> c;
			square[i][j] = c - '0';
		}
	}
	// 1�� ���̽�
	for(int i = 0; i < m - 2; i++){
		for(int j = i + 1; j < m - 1;j++){
			sq1 = getSum(0, 0, i, n - 1);
			sq2 = getSum(i + 1, 0, j, n - 1);
			sq3 = getSum(j + 1, 0, m - 1, n - 1);
			if(ans < sq1 * sq2 * sq3)
				ans = sq1 * sq2 * sq3;
		}
	}

	// 2�� ���̽�
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 2;j++){
			sq1 = getSum(0, 0, m - 1, i);
			sq2 = getSum(0, i + 1, m - 1, j);
			sq3 = getSum(0, j + 1, m - 1, n - 1);
			if(ans < sq1 * sq2 * sq3)
				ans = sq1 * sq2 * sq3;
		}
	}
}
