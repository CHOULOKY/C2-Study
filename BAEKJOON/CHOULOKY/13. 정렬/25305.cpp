#include <iostream>
using namespace std;

void quickSort(int* arr, int start, int end) {
	if(start >= end) return;
	
	int pivot = start;
	int i = start + 1;
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
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	quickSort(arr, start, j-1);
	quickSort(arr, j+1, end);
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;int arr[a];for(int i=0;i<a;i++)cin>>arr[i];
	quickSort(arr, 0, a-1);
	cout<<arr[a-b];
}
