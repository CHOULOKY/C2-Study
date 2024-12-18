// Title: ¿µ¼öÁõ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int x, n; cin >> x >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		x -= a*b;
	}
	if(x==0) cout << "Yes";
	else cout << "No";
	
	return 0;
}
