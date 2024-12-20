#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<pair<int, int>> vec;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		vec.push_back({a, b});
	}
	sort(vec.begin(), vec.end(), cmp);
	for(auto iter:vec) {
		cout << iter.first << ' ' << iter.second << '\n';
	}
}
