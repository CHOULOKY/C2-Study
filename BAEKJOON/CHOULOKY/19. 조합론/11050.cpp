#include <iostream>
using namespace std;

int fac(int num) {
	int result = 1;
	for(int i=1; i<=num; i++) {
		result *= i;
	}
	return result;
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	cout << fac(a) / (fac(b) * (fac(a-b)));
}
