#include <iostream>
using namespace std;

int board[64][64];

void cut(int x, int y, int n) {
	bool zero = false, one = false;
	for(int i=x; i<x+n; i++) {
		for(int j=y; j<y+n; j++) {
			if(board[i][j] == 0) zero = true;
			else one = true;
			
			if(zero && one) {
				cout << '(';
				cut(x, y, n/2);
				cut(x, y+n/2, n/2);
				cut(x+n/2, y, n/2);
				cut(x+n/2, y+n/2, n/2);
				cout << ')';
				return;
			}
		}
	}
	
	if(zero != one) {
		if(zero) cout << '0';
		else cout << '1';
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	
	string str;
	for(int i=0; i<n; i++) {
		cin >> str;
		for(int j=0; j<n; j++) {
			board[i][j] = str[j]-'0';
		}
	}
	
	cut(0, 0, n);
}
