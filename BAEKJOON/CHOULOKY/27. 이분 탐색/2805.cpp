#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	long long arr[n], maxnum = 0;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		maxnum = max(maxnum, arr[i]);
	}
	
	long long mid, left=0, right=maxnum, result;
	while(left <= right) {
		mid = (left + right) / 2;
		
		long long sum = 0, temp;
		for(int i=0; i<n; i++) {
			temp = arr[i] - mid;
			sum += temp > 0 ? temp : 0;
		}
		
		if(sum >= m) {
			result = mid;
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
	
	cout << result;
}
