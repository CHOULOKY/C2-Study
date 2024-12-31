#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, c; cin >> n >> c;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	
	int result;
	int left=1, right=arr[n-1]-arr[0], mid;
	while(left <= right) {
		mid = (left+right)/2;
		
		int count = 1;
		int cur = arr[0];
		for(int i=1; i<n; i++) {
			if(arr[i] - cur >= mid) {
				count++;
				cur = arr[i];
			}
		}
		
		if(count >= c) {
			result = mid;
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
	
	cout << result;
}
