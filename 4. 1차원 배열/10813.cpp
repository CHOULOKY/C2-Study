// Title: 공 바꾸기
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	vector<int> vec;
	for(int i=0; i<=n; i++) {
		vec.push_back(i);
	}
	for(int i=0; i<m; i++) {
		int a, b; cin >> a >> b;
		swap(vec[a], vec[b]);
	}
	for(int i=0; i<n; i++) cout << vec[i+1] << ' ';
	
	return 0;
}
