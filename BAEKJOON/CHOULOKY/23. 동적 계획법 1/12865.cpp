#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, k; cin >> n >> k;
	
	pair<int, int> arr[n+1];
	arr[0] = make_pair(0, 0);
	for(int i=1; i<=n; i++) {
		int w, v; cin >> w >> v;
		arr[i] = make_pair(w, v);
	}
	
	int dp[n+1][k+1];
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=k; j++) {
			if(i==0 || j==0) dp[i][j] = 0;
			else if(arr[i].first <= j) dp[i][j] = max(dp[i-1][j-arr[i].first] + arr[i].second, dp[i-1][j]);
			else dp[i][j] = dp[i-1][j];
		}
	}
	
	cout << dp[n][k];
}
