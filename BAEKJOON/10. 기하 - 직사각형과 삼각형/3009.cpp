// Title: 네 번째 점
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	map<int, int> x, y;
	for(int i=0; i<3; i++) {
		int a, b; cin >> a >> b;
		x[a]++; y[b]++;
	}
	for(auto iter:x) {
		if(iter.second==1) {
			cout<<iter.first<<' '; break;
		}
	}
	for(auto iter:y) {
		if(iter.second==1) {
			cout<<iter.first; break;
		}
	}
}
