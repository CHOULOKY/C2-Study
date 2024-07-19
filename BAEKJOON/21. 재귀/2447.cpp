// Title: º° Âï±â - 10
// Solved by VICLOKY

#include <iostream>
using namespace std;

void Star(int i, int j, int n) {
	if(n == 1) cout << '*';
	else if((i/(n/3)) % 3 == 1 && (j/(n/3)) % 3 == 1) cout << ' ';
	else Star(i, j, n/3);
}
int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			Star(i, j, n);
		}
		cout << '\n';
	}
}
