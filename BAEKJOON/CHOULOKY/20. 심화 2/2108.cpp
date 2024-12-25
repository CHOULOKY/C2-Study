#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int a, b, c, d, d1, d2;
	a = b = c = d = 0;
	d1 = -4000; d2 = 4000;
	
	vector<int> vec, cvec;
	map<int, int> mp;
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
		int ctemp = ++mp[num];
		
		a += num;
		if(c <= ctemp) {
			if(c != ctemp) cvec.clear();
			cvec.push_back(num);
			c = ctemp;
		}
		d1 = max(d1, num);
		d2 = min(d2, num);
	}
	
	sort(vec.begin(), vec.end());
	sort(cvec.begin(), cvec.end());
	
	a = round((double)a / n);
	b = vec[n/2];
	if(cvec.size() == 1) c = cvec[0];
	else c = cvec[1];
	d = abs(d2 - d1);
	
	cout << a << '\n' << b << '\n' << c << '\n' << d;
}
