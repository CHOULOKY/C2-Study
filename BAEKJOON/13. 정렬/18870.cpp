// Title: ÁÂÇ¥ ¾ÐÃà
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> vec(n);
	for(int i=0; i<n; i++) cin >> vec[i];
	vector<int> _vec(vec);
	sort(_vec.begin(), _vec.end());
	_vec.erase(unique(_vec.begin(), _vec.end()), _vec.end());
	for(int i=0; i<n; i++) {
		auto iter = lower_bound(_vec.begin(), _vec.end(), vec[i]) - _vec.begin();
		cout << iter << ' ';
	}
}
