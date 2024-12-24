#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	int result = 1;
	for(int i=1; i<=n; i++) {
		result *= i;
	}
	cout << result;
}
