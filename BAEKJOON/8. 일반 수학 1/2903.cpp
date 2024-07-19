// Title: 중앙 이동 알고리즘
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> vec;
	vec.push_back(2);
	int plus=1;
	for(int i=1; i<=n; i++) {
		vec.push_back(vec[i-1]+plus);
		plus *= 2;
	}
	cout << vec[n]*vec[n];
	
	return 0;
}

