// Title: A+B - 7
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		cout << "Case #" << i+1 << ": " << a+b << '\n';
	}
	
	return 0;
}
