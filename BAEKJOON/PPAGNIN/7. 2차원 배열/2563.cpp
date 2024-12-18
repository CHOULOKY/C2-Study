// Title: »öÁ¾ÀÌ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int board[100][100]={0};
	for(int k=0; k<n; k++) {
		int a, b; cin >> a >> b;
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) {
				board[a+i][b+j] = 1;
			}
		}
	}
	int result=0;
	for(int i=0; i<100; i++) {
		for(int j=0; j<100; j++) {
			if(board[i][j]==1) result++;
		}
	}
	cout << result;
	
	return 0;
}
