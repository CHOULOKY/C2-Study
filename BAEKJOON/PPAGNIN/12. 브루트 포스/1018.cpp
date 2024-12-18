// Title: 체스판 다시 칠하기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	string wBoard[8]={
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
	};
	string bBoard[8]={
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
	};
	int a,b; cin>>a>>b;
	string board[a];
	for(int i=0; i<a; i++) cin>>board[i];
	int result=2500;
	for(int i=0; i<=a-8; i++) {
		for(int j=0; j<=b-8; j++) {
			int wcount=0, bcount=0;
			for(int x=0; x<8; x++) {
				for(int y=0; y<8; y++) {
					if(board[x+i][y+j]!=wBoard[x][y]) wcount++;
					if(board[x+i][y+j]!=bBoard[x][y]) bcount++;
				}
			}
			result = min(result, min(wcount, bcount));
		}
	}
	cout << result;
}

