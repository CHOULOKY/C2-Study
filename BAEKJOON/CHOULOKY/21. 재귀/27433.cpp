#include <iostream>
using namespace std;

long long fac(int n) {
	if(n == 0) return 1;
	return n * fac(n-1);
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	cout << fac(n);
}
