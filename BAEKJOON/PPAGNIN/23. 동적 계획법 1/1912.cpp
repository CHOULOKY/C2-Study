// Title: ¿¬¼ÓÇÕ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int arr[n+1]={0}, dp[n+1]={0};
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	int result=-1000;
	for(int i=1; i<=n; i++) {
		dp[i] = max(dp[i-1] + arr[i], arr[i]);
		result = max(result, dp[i]);
	}
	cout << result;
}
