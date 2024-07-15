// Title: ¿ŒªÁº∫ π‡¿∫ ∞ı∞ı¿Ã
// Solved by VICLOKY

#include <iostream>
#include <set>
using namespace std;

int main(void) {
	int n; cin >> n;
	set<string> st;
	int result=0;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		if(str == "ENTER") {
			result += st.size();
			st.clear();
		}
		else st.insert(str);
	}
	cout << result + st.size();
}
