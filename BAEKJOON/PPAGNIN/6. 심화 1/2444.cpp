// Title: º° Âï±â - 7
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=1; i<=2*n-1; i++) {
		for(int j=1; j<=abs(n-i); j++) {
			cout << ' ';
		}
		for(int j=1; j<=(n-abs(n-i))*2-1; j++) {
			cout << '*';
		}
		cout << '\n';
	}
	
	return 0;
}
