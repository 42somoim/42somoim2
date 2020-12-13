#include<iostream>

using namespace std;
/*
- 똑같은 속도로 가기 위해 이분 탐색을 사용
- 타겟이 없기에 재귀 사용
	+ 한 함수에 매개변수 8개 사용(x1_left, x1_right, y1_left, y1_right ... y2_right) ??
 ps.삼분탐색 : https://m.blog.naver.com/PostView.nhn?blogId=kks227&logNo=221432986308&proxyReferer=https:%2F%2Fwww.google.com%2F
*/
void recursive_dist(int left, int right){
	int mid;

	mid = (left + right) / 2;
	recursive_dist(left, mid - 1); // 왼쪽
	recursive_dist(mid + 1, right); // 오른쪽
}

int main(void){
	int ax, ay, bx, by, cx, cy, dx, dy;

	cin >> ax >> ay >> bx >> by;
	cin >> cx >> cy >> dx >> dy;
}
