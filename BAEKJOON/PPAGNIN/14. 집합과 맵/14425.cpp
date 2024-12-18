// Title: 문자열 집합
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	map<string, int> mp;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		mp[str] = 1;
	}
	int result=0;
	for(int i=0; i<m; i++) {
		string str; cin >> str;
		result += mp[str];
	}
	cout << result;
}
