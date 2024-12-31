#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, k; cin >> n >> k;
	
	int left=1, right=k, mid;
	while(left < right) {
		mid = (left + right) / 2;
		
		int count = 0;
		for(int i=1; i<=n; i++) {
			count += min(n, mid/i);
		}
		
		if(count < k) {
			left = mid+1;
		}
		else {
			right = mid;
		}
	}
	
	cout << right;
}
