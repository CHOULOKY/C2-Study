// Title: 수 정렬하기
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> vec;
	for(int i=0; i<n; i++) {
		int num; cin>>num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	for(auto iter:vec) cout << iter<<'\n';
}
