// Title: ³ª¸ÓÁö
// Solved by VICLOKY

#include <iostream>
#include <set>
using namespace std;

int main(void) {
	set<int> st;
	for(int i=0; i<10; i++) {
		int num; cin >> num;
		st.insert(num%42);
	}
	cout << st.size();
	
	return 0;
}
