// Title: 영단어 암기는 괴로워
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
	if(a.second == b.second) {
		if(a.first.size() == b.first.size()) return a.first < b.first;
		return a.first.size() > b.first.size();
	}
	return a.second > b.second;
}
int main(void) {
	int n, m; cin >> n >> m;
	map<string, int> mp;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		if(str.size() >= m) mp[str]++;
	}
	vector<pair<string, int>> vec(mp.begin(), mp.end());
	sort(vec.begin(), vec.end(), compare);
	for(auto iter:vec) {
		cout << iter.first << '\n';
	}
}
