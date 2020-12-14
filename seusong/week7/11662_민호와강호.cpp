/*
- 똑같은 속도로 가기 위해 이분 탐색을 사용
- 타겟이 없기에 재귀 사용
	+ 한 함수에 매개변수 8개 사용(x1_left, x1_right, y1_left, y1_right ... y2_right) ??
 ps.삼분탐색 : https://m.blog.naver.com/PostView.nhn?blogId=kks227&logNo=221432986308&proxyReferer=https:%2F%2Fwww.google.com%2F
*/

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int flag = 1000000;

double getDistance(double lx, double ly, double rx, double ry){
	return sqrt(pow(rx - lx, 2) + pow(ry - ly, 2));
}
int main(void){
	double ax, ay, bx, by, cx, cy, dx, dy;
	double ldx, ldy, rdx, rdy, min_value;
	int lo, hi;

	cin >> ax >> ay >> bx >> by;
	cin >> cx >> cy >> dx >> dy;
	ldx = (bx - ax)	/ flag; rdx = (dx - cx) / flag;
	ldy = (by - ay) / flag; rdy = (dy - cy) / flag;
	lo = 0; hi = flag;
	while(hi - lo >= 3){
		int p, q;
		double pVal, qVal;
		p = (2 * lo + hi) / 3;
		q = (lo + 2 * hi) / 3;
		pVal = getDistance(ax + ldx * p, ay + ldy * p, cx + rdx * p, cy + rdy * p);
		qVal = getDistance(ax + ldx * q, ay + ldy * q, cx + rdx * q, cy + rdy * q);
		if(pVal < qVal)
			hi = q - 1;
		else lo = p + 1;
	}
	min_value = getDistance(ax + ldx * hi, ay + ldy * hi, cx + rdx * hi, cy + rdy * hi);
	for(int i = lo; i < hi ;i++){
		double dist = getDistance(ax + ldx * i, ay + ldy * i, cx + rdx * i, cy + rdy * i);
		if(min_value > dist)
			min_value = dist;
	}
	cout.setf(ios::fixed); // 부동 소수 출력
	cout.precision(10); // 부동 소수점수 출력 정밀도 설정
	cout << min_value;
}
