#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int count = 0;
		string str; cin >> str;
		for(int j=0; j<str.length(); j++) {
			if(str[j] == '(') count++;
			else count--;
			if(count < 0) break;
		}
		if(count != 0) cout << "NO";
		else cout << "YES";
		cout << '\n';
	}
}
