// Title: 단어 정렬
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

bool compare(string a, string b) {
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main(void) {
	int n; cin >> n;
	set<string> st;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		st.insert(str);
	}
	vector<string> vec(st.begin(), st.end());
	sort(vec.begin(), vec.end(), compare);
	for(auto iter:vec) cout << iter << '\n';
}
