#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int arr[n+1] = {0};
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	
	int dp[n+1] = {0};
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for(int i=3; i<=n; i++) {
		dp[i] = max(dp[i-2] + arr[i], max(dp[i-3] + arr[i-1] + arr[i], dp[i-1]));
	}
	
	cout << dp[n];
}
