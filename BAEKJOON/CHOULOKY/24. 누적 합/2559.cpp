#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, k; cin >> n >> k;
	int arr[n+1] = {0};
	for(int i=1; i<=n; i++) {
		int num; cin >> num;
		arr[i] = arr[i-1] + num;
	}
	
	int result = -1e9;
	for(int i=k; i<=n; i++) {
		result = max(result, arr[i] - arr[i-k]);
	}
	cout << result;
}
