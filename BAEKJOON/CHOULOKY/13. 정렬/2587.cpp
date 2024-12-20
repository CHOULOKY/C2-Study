#include <iostream>
using namespace std;

void quickSort(int* arr, int start, int end) {
	if(start >= end) return;
	
	int pivot = start;
	int i = start+1;
	int j = end;
	while(i <= j) {
		while(arr[i] <= arr[pivot]) i++;
		while(arr[j] > arr[pivot]) j--;
		if(i > j) {
			int temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	
	quickSort(arr, start, j-1);
	quickSort(arr, j+1, end);
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[5]; for(int i=0; i<5; i++) cin>>arr[i];
	quickSort(arr, 0, 4);
	cout<<(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5<<' '<<arr[2];
}
