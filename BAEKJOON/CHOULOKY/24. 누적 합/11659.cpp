#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	int arr[n+1];
	for(int i=1; i<=n; i++) {
		int num; cin >> num;
		arr[i] = arr[i-1] + num;
	}
	for(int i=0; i<m; i++) {
		int a, b; cin >> a >> b;
		cout << arr[b] - arr[a-1] << '\n';
	}
}
