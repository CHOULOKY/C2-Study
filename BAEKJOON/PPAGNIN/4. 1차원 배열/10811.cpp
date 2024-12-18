// Title: 바구니 뒤집기
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	vector<int> vec;
	for(int i=0; i<=n; i++) vec.push_back(i);
	for(int i=0; i<m; i++) {
		int a, b; cin >> a >> b;
		reverse(vec.begin()+a, vec.begin()+b+1);
	}
	for(int i=1; i<=n; i++) cout << vec[i] << ' ';
	
	return 0;
}

