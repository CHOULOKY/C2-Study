// Title: °ø ³Ö±â
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	vector<int> vec(n+1);
	for(int i=0; i<m; i++) {
		int a, b, c; cin >> a >> b >> c;
		for(int j=a; j<=b; j++) vec[j] = c;
	}
	for(int i=1; i<=n; i++) cout << vec[i] << ' ';
		
	return 0;
}
