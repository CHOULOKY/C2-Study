#include <iostream>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	map<string, bool> mp;
	mp.insert(make_pair("ChongChong", true));
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string a, b;
		cin >> a >> b;
		if(mp[a] || mp[b]) {
			mp[a] = mp[b] = true;
		}
	}
	
	int result = 0;
	for(auto iter:mp) {
		if(iter.second) result++;
	}
	cout << result;
}
