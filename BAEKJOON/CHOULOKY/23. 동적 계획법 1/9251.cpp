#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	string a, b;
	cin >> a >> b;
	
	int asize = a.length();
	int bsize = b.length();
	
	int dp[asize+1][bsize+1];
	for(int i=0; i<asize+1; i++) {
		for(int j=0; j<bsize+1; j++) {
			dp[i][j] = 0;
		}
	}
	
	for(int i=1; i<asize+1; i++) {
		for(int j=1; j<bsize+1; j++) {
			if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	cout << dp[asize][bsize];
}
