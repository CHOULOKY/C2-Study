#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int dp[n];
	cin >> dp[0];
	int result = dp[0];
	
	for(int i=1; i<n; i++) {
		cin >> dp[i];
		dp[i] = max(dp[i], dp[i-1] + dp[i]);
		result = max(result, dp[i]);
	}
	
	cout << result;
}
