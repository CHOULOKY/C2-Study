// Title: ≈Î∞Ë«–
// Solved by VICLOKY

#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> vec;
	map<int, int> mp;
	int maxmp=0;
	double a=0, b=0, c=0, d=0;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		a += num;
		vec.push_back(num);
		mp[num]++;
		maxmp = max(maxmp, mp[num]);
	}
	sort(vec.begin(), vec.end());
	vector<int> cvec;
	for(auto iter:mp) {
		if(maxmp == iter.second) {
			cvec.push_back(iter.first);
		}
	}
	sort(cvec.begin(), cvec.end());
	a = floor(a/n + 0.5);
	b = vec[n/2];
	if(cvec.size()==1) c = cvec[0];
	else c = *(cvec.begin()+1);
	d = vec.back() - vec.front();
	cout << a << '\n' << b << '\n' << c << '\n' << d;
}
