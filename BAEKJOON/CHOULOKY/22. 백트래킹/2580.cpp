#include <iostream>
#include <vector>
using namespace std;

int board[9][9];
vector<pair<int, int>> vec;
bool isend = false;

bool check(int x, int y, int value) {
	for(int i=0; i<9; i++) {
		if(board[x][i] == value || board[i][y] == value) return false;
	}
	
	x = x /3*3;
	y = y /3*3;
	
	for(int i=x; i<x+3; i++) {
		for(int j=y; j<y+3; j++) {
			if(board[i][j] == value) return false;
		}
	}
	
	return true;
}

void sudoku(int index) {
	if(isend) return;
	else if(index == vec.size()) {
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++) {
				cout << board[i][j] << ' ';
			}
			cout << '\n';
		}
		isend = true;
		return;
	}
	
	int x = vec[index].first;
	int y = vec[index].second;
	for(int i=1; i<=9; i++) {
		if(check(x, y, i)) {
			board[x][y] = i;
			sudoku(index+1);
			board[x][y] = 0;
		}
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cin >> board[i][j];
			if(board[i][j] == 0) vec.push_back({i, j});
		}
	}
	
	sudoku(0);
}
