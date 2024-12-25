#include <iostream>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	map<string, bool> mp;
	int n; cin >> n;
	int result = 0;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		if(str == "ENTER") {
			result += mp.size();
			mp.clear();
		}
		else {
			mp[str] = true;
			if(i == n-1) result += mp.size();
		}
	}
	cout << result;
}
