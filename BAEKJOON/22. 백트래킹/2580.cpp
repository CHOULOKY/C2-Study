// Title: ½ºµµÄí
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int board[9][9];
bool isClear = false;

bool check(int x, int y) {
	for(int i=0; i<9; i++) {
		if(board[x][y] == board[x][i] && i != y) return false;
		if(board[x][y] == board[i][y] && i != x) return false;
	}
	int xSquare = x/3*3;
	int ySquare = y/3*3;
	for(int i=xSquare; i<xSquare+3; i++) {
		for(int j=ySquare; j<ySquare+3; j++) {
			if(board[x][y] == board[i][j] && x != i && y != j) return false;
		}
	}
	return true;
}
void sudoku(vector<pair<int, int>>& pos, int n) {
	if(isClear) return;
	if(n == pos.size()) {
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++) {
				cout << board[i][j] << ' ';
			}
			cout << '\n';
		}
		isClear = true;
		return;
	}
	
	int x = pos[n].first, y = pos[n].second;
	for(int i=0; i<9; i++) {
		board[x][y] = i+1;
		if(isClear) return;
		if(check(x, y)) sudoku(pos, n+1);
	}
	board[x][y] = 0;
}
int main(void) {
	vector<pair<int, int>> pos;
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cin >> board[i][j];
			if(board[i][j] == 0) pos.push_back({i, j});
		}
	}
	sudoku(pos, 0);
}
