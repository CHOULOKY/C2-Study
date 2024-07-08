// Title: ÃÖ´ñ°ª
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	vector<int> vec;
	for(int i=0; i<9; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	auto iter = max_element(vec.begin(), vec.end());
	cout << *iter << '\n' << iter - vec.begin() + 1;
	
	return 0;
}
