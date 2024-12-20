#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	int result = 10000;
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=n; j++) {
			if(5*i + 3*j == n) {
				result = min(result, i+j);
			}
		}
	}
	if(result == 10000) cout << -1;
	else cout << result;
}
