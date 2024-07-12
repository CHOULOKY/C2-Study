// Title: 대칭 차집합
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n, m; cin>>n>>m;
	map<int, bool> mp;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		mp[num]=1;
	}
	int count=0;
	for(int i=0; i<m; i++) {
		int num; cin >> num;
		if(mp[num]) count++;
	}
	cout << (n-count) + (m-count);
}
