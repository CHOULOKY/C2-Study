#include <iostream>
#include <set>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	set<string> st;
	int a, b; cin >> a >> b;
	for(int i=0; i<a; i++) {
		string str; cin >> str;
		st.insert(str);
	}
	int result = 0;
	for(int i=0; i<b; i++) {
		string str; cin >> str;
		if(st.find(str) != st.end()) result++;
	}
	cout << result;
}
