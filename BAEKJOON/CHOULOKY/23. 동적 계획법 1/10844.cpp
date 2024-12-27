#include <iostream>
using namespace std;

#define mod 1000000000

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	
	int dp[n+1][10] = {0};
	for(int i=1; i<10; i++) {
		dp[1][i] = 1;
	}
	
	for(int i=2; i<n+1; i++) {
		for(int j=0; j<10; j++) {
			if(j==0) dp[i][0] = dp[i-1][j+1];
			else if(j==9) dp[i][9] = dp[i-1][j-1];
			else dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
			dp[i][j] = dp[i][j] % mod;
		}
	}
	
	int result = 0;
	for(int i=0; i<10; i++) {
		result = (result + dp[n][i]) % mod;
	}
	cout << result;
}
