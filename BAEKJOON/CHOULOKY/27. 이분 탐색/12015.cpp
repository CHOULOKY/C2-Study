#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(vec.empty() || vec.back() < num) vec.push_back(num);
		else {
			*lower_bound(vec.begin(), vec.end(), num) = num;
		}
	}
	cout << vec.size();
}
