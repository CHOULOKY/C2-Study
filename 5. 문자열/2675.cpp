// Title: 문자열 반복
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; string str;
		cin >> num >> str;
		for(int j=0; j<str.size(); j++) {
			for(int k=0; k<num; k++) {
				cout << str[j];
			}
		}
		cout << '\n';
	}
	
	return 0;
}

