#include <iostream>
#include <set>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str; cin >> str;
	set<string> st;
	int length = str.length();
	for(int i=0; i<length; i++) {
		for(int j=i; j<length; j++) {
			st.insert(str.substr(i, j-i+1));
		}
	}
	cout << st.size();
}
