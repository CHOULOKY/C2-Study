#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	unsigned arr[n];
	unsigned maxnum = 0;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		maxnum = max(maxnum, arr[i]);
	}
	
	unsigned result = 0;
	unsigned mid, left=1, right=maxnum;
	while(left <= right) {
		mid = (left + right) / 2;
		
		unsigned temp=0;
		for(int i=0; i<n; i++) {
			temp += arr[i]/mid;
		}
		
		if(temp >= m) {
			result = mid;
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
	
	cout << result;
}
