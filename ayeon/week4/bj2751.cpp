#include <stdio.h>

// heap sort

void exchange(int *num, int i, int j){
	int tmp = num[i];
	num[i] = num[j];
	num[j] = tmp;
}

void maxHeapify(int *num, int root, int size){
	int l = 2*root+1, r = 2*root+2, max;
	if (l < size && num[l] > num[root])	max = l;
	else	max = root;
	if (r < size && num[r] > num[max])	max = r;
	if (max != root){
		exchange(num, max, root);
		maxHeapify(num, max, size);
	}
}

void buildMaxHeap(int *num, int size){
	for (int i = size/2-1; i >= 0; i--)
		maxHeapify(num, i, size);
}

int main(){
	int n, num[1000001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	buildMaxHeap(num, n);
	for (int i = n; i >= 2; i--){
		exchange(num, 0, i-1);
		maxHeapify(num, 0, i-1);
	}
	for (int i = 0; i<n; i++)
		printf("%d\n", num[i]);
	return 0;
}

// sort()를 이용한 풀이 -> 이게 더 빠름
// sort()는 퀵소트를 이용함.

// #include <stdio.h>
// #include <algorithm>
// using namespace std;
// int main(){
// 	int n, num[1000001];
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++)
// 		scanf("%d", &num[i]);
// 	sort(num,num+n);
// 	for (int i = 0; i < n; i++)
// 		printf("%d\n", num[i]);
// 	return 0;
// }
