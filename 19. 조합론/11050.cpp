// Title: 이항 계수 1
// Solved by VICLOKY

#include <iostream>
using namespace std;

int fac(int n) {
	if(n==1 || n==0) return 1;
	return n * fac(n-1);
}
int main(void) {
	int n, m; cin >> n >> m;
	cout << fac(n) / (fac(m) * fac(n-m));
}
