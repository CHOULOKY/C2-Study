#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
	if(a.second == b.second) {
		if(a.first.length() == b.first.length()) return a.first < b.first;
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	map<string, int> mp;
	
	int a, b; cin >> a >> b;
	for(int i=0; i<a; i++) {
		string str; cin >> str;
		if(str.length() >= b) {
			mp[str]++;
		}
	}
	
	vector<pair<string, int>> vec(mp.begin(), mp.end());
	sort(vec.begin(), vec.end(), cmp);
	for(auto iter:vec) cout << iter.first << '\n';
}
