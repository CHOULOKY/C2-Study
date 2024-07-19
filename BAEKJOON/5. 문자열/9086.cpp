// Title: ¹®ÀÚ¿­
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		cout << *str.begin() << *(str.end()-1) << '\n';
	}
	
	return 0;
}

