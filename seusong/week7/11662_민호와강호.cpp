#include<iostream>

using namespace std;
/*
- �Ȱ��� �ӵ��� ���� ���� �̺� Ž���� ���
- Ÿ���� ���⿡ ��� ���
	+ �� �Լ��� �Ű����� 8�� ���(x1_left, x1_right, y1_left, y1_right ... y2_right) ??
 ps.���Ž�� : https://m.blog.naver.com/PostView.nhn?blogId=kks227&logNo=221432986308&proxyReferer=https:%2F%2Fwww.google.com%2F
*/
void recursive_dist(int left, int right){
	int mid;

	mid = (left + right) / 2;
	recursive_dist(left, mid - 1); // ����
	recursive_dist(mid + 1, right); // ������
}

int main(void){
	int ax, ay, bx, by, cx, cy, dx, dy;

	cin >> ax >> ay >> bx >> by;
	cin >> cx >> cy >> dx >> dy;
}
