// Title: X보다 작은 수
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	vector<int> vec;
	for(int i=0; i<a; i++) {
		int num; cin >> num;
		if(num < b) vec.push_back(num);
	}
	for(auto iter:vec) cout << iter << ' ';
	
	return 0;
}
