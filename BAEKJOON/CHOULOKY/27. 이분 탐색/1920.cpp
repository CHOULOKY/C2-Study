#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	long long arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	int m; cin >> m;
	for(int i=0; i<m; i++) {
		long long num; cin >> num;
		
		int left = 0, right = n-1, mid = 0;
		bool isexist = false;
		while(left <= right) {
			mid = (left + right) / 2;
			if(arr[mid] == num) {
				isexist = true;
				break;
			}
			if(num > arr[mid]) left = mid+1;
			else right = mid-1;
		}
		
		if(isexist) cout << 1;
		else cout << 0;
		cout << '\n';
	}
}
