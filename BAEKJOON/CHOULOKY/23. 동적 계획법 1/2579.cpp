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
	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
	
	for(int i=3; i<n; i++) {
		dp[i] = max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i]);
	}
	
	cout << dp[n-1];
}
