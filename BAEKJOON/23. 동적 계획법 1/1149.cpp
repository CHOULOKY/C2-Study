// Title: RGB°Å¸®
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int dp[n+1][3] = {0};
	for(int i=1; i<=n; i++) {
		int a, b, c; cin >> a >> b >> c;
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + a;
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + b;
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + c;
	}
	cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
}
