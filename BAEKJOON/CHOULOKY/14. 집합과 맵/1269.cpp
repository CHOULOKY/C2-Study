#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	map<int, int> mp;
	
	int num;
	for(int i=0; i<a; i++) {
		cin >> num;
		mp[num]++;
	}
	for(int i=0; i<b; i++) {
		cin >> num;
		mp[num]++;
	}
	
	vector<int> vec;
	for(auto iter:mp) {
		if(iter.second == 1) vec.push_back(iter.first);
	}
	
	cout << vec.size() << '\n';
}
