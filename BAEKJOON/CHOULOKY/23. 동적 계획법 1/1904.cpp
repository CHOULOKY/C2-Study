#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int arr[n+1];
	arr[1] = 1;
	arr[2] = 2;
	for(int i=3; i<=n; i++) {
		arr[i] = (arr[i-1] + arr[i-2]) % 15746;
	}
	cout << arr[n];
}
