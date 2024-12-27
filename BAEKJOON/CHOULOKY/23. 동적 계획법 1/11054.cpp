#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	int dp[n];
	for(int i=0; i<n; i++) {
		dp[i] = 1;
		for(int j=0; j<i; j++) {
			if(arr[j] < arr[i]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	
	int rdp[n];
	for(int i=n-1; i>=0; i--) {
		rdp[i] = 1;
		for(int j=i+1; j<=n-1; j++) {
			if(arr[j] < arr[i]) {
				rdp[i] = max(rdp[i], rdp[j]+1);
			}
		}
	}
	
	int result=0;
	for(int i=0; i<n; i++) {
		result = max(result, dp[i] + rdp[i] - 1);
	}
	cout << result;
}
