// Title: 최소, 최대
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	cout << *min_element(vec.begin(), vec.end()) << ' ' << *max_element(vec.begin(), vec.end());
	
	return 0;
}
