// Title: 커트라인
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int a, b; cin>>a>>b;
	vector<int> vec;
	for(int i=0; i<a; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end(), greater<int>());
	cout<<vec[b-1];
}
