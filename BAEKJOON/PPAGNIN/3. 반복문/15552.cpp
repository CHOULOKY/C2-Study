// Title: ���� A+B
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		cout << a + b << '\n';
	}
	
	return 0;
}
