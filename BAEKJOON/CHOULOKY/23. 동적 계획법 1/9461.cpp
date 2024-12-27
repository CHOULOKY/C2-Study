#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	long long dp[101];
	dp[1] = dp[2] = dp[3] = 1;
	for(int i=4; i<=100; i++) {
		dp[i] = dp[i-2] + dp[i-3];
	}
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		cout << dp[num] << '\n';
	}
}
