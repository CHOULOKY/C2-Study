// Title: 소인수분해
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			cout << i << '\n';
			n /= i;
			i--;
		}
	}
	if(n>1) cout << n;
}
