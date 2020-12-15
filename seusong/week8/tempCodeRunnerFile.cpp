void merge(int arr[], int left, int mid, int right){
// 	int i, j, k;
// 	int tmpArr[2000001];

// 	i = left, j = mid + 1, k = left;
// 	while(i <= mid && j <= right){
// 		if(arr[i] <= arr[j]){
// 			tmpArr[k] = arr[i];
// 			i++;
// 		}else{
// 			tmpArr[k] = arr[j];
// 			j++;
// 		}
// 		k++;
// 	}
// 	if(i > mid){
// 		for(int m = j; m <= right; m++){
// 			tmpArr[k] = arr[m]; k++;
// 		}
// 	}else{
// 		for(int m = i; m <= mid; m++){
// 			tmpArr[k] = arr[m]; k++;
// 		}
// 	}
// 	for(int m = left; m <= right; m++){
// 		arr[m] = tmpArr[m];
// 	}
// }
// void msort(int arr[], int left, int right){
// 	int mid;

// 	if(left < right){
// 		mid = (left + right) / 2;

// 		msort(arr, left, mid);
// 		msort(arr, mid + 1, right);
// 		cout << left << " " << mid << " " << right << endl;
// 		//merge(arr, left, mid, right);
// 	}
// }