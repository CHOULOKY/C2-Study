#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	
	vector<int> cvec(vec);
	sort(cvec.begin(), cvec.end());
	cvec.erase(unique(cvec.begin(), cvec.end()), cvec.end());
	
	for(int i=0; i<vec.size(); i++) {
		cout << lower_bound(cvec.begin(), cvec.end(), vec[i]) - cvec.begin() << ' ';
	}
}
