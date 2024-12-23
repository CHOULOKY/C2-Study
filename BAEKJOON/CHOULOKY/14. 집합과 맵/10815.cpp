#include <iostream>
#include <set>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	set<int> st;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		st.insert(num);
	}
	int m; cin >> m;
	for(int i=0; i<m; i++) {
		int num; cin >> num;
		if(st.find(num) != st.end()) cout << 1;
		else cout << 0;
		cout << ' ';
	}
}
