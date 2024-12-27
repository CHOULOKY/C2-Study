#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int arr[n+1][n+1];
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cin >> arr[i][j];
		}
	}
	
	int dp[n+1][n+1] = {0};
	dp[1][1] = arr[1][1];
	
	for(int i=2; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
		}
	}
	
	int result=0;
	for(int i=1; i<=n; i++) {
		result = max(result, dp[n][i]);
	}
	
	cout << result;
}
