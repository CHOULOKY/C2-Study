// Title: °ýÈ£
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		int count=0;
		bool check=true;
		for(int j=0; j<str.size(); j++) {
			if(str[j]=='(') count++;
			else if(str[j]==')') count--;
			if(count<0) {
				check=false; break;
			}
		}
		if(count != 0) check = false;
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}

