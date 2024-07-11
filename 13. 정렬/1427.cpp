// Title: 소트인사이드
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	string n; cin >> n;
	int a[n.size()];
	for(int i=0; i<n.size(); i++) {
		a[i] = n[i]-'0';
	}
	sort(a, a+n.size(), greater<int>());
	for(auto iter:a) cout<<iter;
}
