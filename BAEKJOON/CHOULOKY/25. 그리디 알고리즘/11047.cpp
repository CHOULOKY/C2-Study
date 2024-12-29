#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, k; cin >> n >> k;
	
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	int result = 0;
	for(int i=n-1; i>=0; i--) {
		result += k / arr[i];
		k %= arr[i];
	}
	
	cout << result;
}
