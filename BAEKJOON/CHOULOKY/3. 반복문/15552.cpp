#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		cout << a + b << '\n';
	}
}
