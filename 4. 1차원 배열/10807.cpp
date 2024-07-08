// Title: 개수 세기
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n; cin >> n;
	map<int, int> m;
	for(int i=0; i<n; i++) {
		int a; cin >> a;
		m[a]++;
	}
	int k; cin >> k;
	cout << m[k];
	
	return 0;
}
