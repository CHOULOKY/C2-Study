// Title: ÆÑÅä¸®¾ó 2
// Solved by VICLOKY

#include <iostream>
using namespace std;

size_t Fac(size_t n) {
	if(n==1 || n==0) return 1;
	return n * Fac(n-1);
}
int main(void) {
	size_t n; cin >> n;
	cout << Fac(n);
}
