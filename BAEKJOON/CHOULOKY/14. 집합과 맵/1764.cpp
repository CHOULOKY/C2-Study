#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	map<string, int> mp;
	
	string str;
	for(int i=0; i<a; i++) {
		cin >> str;
		mp[str]++;
	}
	for(int i=0; i<b; i++) {
		cin >> str;
		mp[str]++;
	}
	
	vector<string> vec;
	for(auto iter:mp) {
		if(iter.second == 2) vec.push_back(iter.first);
	}
	
	cout << vec.size() << '\n';
	for(auto iter:vec) {
		cout << iter << '\n';
	}
}
