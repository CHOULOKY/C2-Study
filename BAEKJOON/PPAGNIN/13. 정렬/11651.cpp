// Title: 좌표 정렬하기 2
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

// False면 오른쪽이 앞으로 
bool Compare(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
int main(void) {
	int n; cin >> n;
	pair<int, int> pos[n];
	for(int i=0; i<n; i++) cin >> pos[i].first >> pos[i].second;
	sort(pos, pos+n, Compare);
	for(auto iter:pos) cout << iter.first << ' ' << iter.second << '\n';
}
