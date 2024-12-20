#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<pair<int, int>, string> a, pair<pair<int, int>, string> b) {
	if(a.first.first == b.first.first) return a.first.second < b.first.second;
	return a.first.first < b.first.first;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<pair<pair<int, int>, string>> vec;
	for(int i=0; i<n; i++) {
		int num; string str;
		cin >> num >> str;
		vec.push_back({{num, i}, str});
	}
	sort(vec.begin(), vec.end());
	for(auto iter:vec) cout << iter.first.first << ' ' << iter.second << '\n';
}

