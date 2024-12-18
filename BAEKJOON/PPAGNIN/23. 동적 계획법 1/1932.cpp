// Title: Á¤¼ö »ï°¢Çü
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int dp[n+1][n+1] = {0};
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=n; j++) {
			if(i==0 || j==0 || i<j) {
				dp[i][j] = 0;
				continue;
			}
			int num; cin >> num;
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + num;
		}
	}
	int result=0;
	for(int i=1; i<=n; i++) {
		result = max(result, dp[n][i]);
	}
	cout << result;
}
