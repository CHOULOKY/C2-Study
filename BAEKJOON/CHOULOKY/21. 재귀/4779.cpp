#include <iostream>
#include <cmath>
using namespace std;

void kan(int n) {
	if(n == 1) {
		cout << '-'; return;
	}
	
	kan(n/3);
	
	for(int i=0; i<n/3; i++) {
		cout << ' ';
	}
	
	kan(n/3);
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n;
	while(cin >> n) {
		kan(pow(3, n));
		cout << '\n';
	}
}
