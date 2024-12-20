#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
	if(a.length() == b.length()) return a < b;
	return a.length() < b.length();
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<string> vec;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		vec.push_back(str);
	}
	sort(vec.begin(), vec.end(), cmp);
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	for(auto iter:vec) cout << iter << '\n';
}

