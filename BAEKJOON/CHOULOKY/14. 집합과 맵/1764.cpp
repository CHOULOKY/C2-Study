#include <iostream>
#include <set>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	set<string> st;
	for(int i=0; i<n; i++) {
		string a, b; cin >> a >> b;
		if(b == "enter") st.emplace(a);
		else st.erase(a);
	}
	for(auto iter=st.rbegin(); iter!=st.rend(); iter++) cout << *iter << '\n';
}
