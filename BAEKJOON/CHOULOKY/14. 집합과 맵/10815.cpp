#include <iostream>
#include <map>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	map<int, int> mp;
	int a; cin >> a;
	for(int i=0; i<a; i++) {
		int num; cin >> num;
		mp[num]++;
	}
	cin >> a;
	for(int i=0; i<a; i++) {
		int num; cin >> num;
		cout << mp[num] << ' ';
	}
}
