#include <iostream>
using namespace std;

int fibo(int n) {
	if(n == 0) return 0;
	else if(n == 1) return 1;
	return fibo(n-2) + fibo(n-1);
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	cout << fibo(n);
}
