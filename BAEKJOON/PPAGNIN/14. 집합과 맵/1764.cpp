// Title: µË∫∏¿‚
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	map<string, int> mp;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		mp[str]++;
	}
	int count=0;
	for(int i=0; i<m; i++) {
		string str; cin >> str;
		if(mp[str]++) count++;
	}
	cout << count << '\n';
	for(auto iter:mp) {
		if(iter.second>1) cout << iter.first << '\n';
	}
}
