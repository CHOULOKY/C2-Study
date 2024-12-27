#include <iostream>
using namespace std;

int board[15];
int n, result=0;

bool check(int x) {
	for(int i=0; i<x; i++) {
		if(board[i] == board[x] || abs(board[x] - board[i]) == x - i) {
			return false;
		}
	}
	
	return true;
}

void nqueen(int x) {
	if(x == n) {
		result++;
		return;
	}
	
	for(int i=0; i<n; i++) {
		board[x] = i;
		if(check(x)) {
			nqueen(x+1);
		}
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n;
	nqueen(0);
	cout << result;
}
