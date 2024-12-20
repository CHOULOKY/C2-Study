#include <iostream>
using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};
string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

int WBCheck(string* board, int x, int y){
	int count=0;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(board[x+i][y+j] != WB[i][j]) count++;
		}
	}
	return count;
}
int BWCheck(string* board, int x, int y){
	int count=0;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(board[x+i][y+j] != BW[i][j]) count++;
		}
	}
	return count;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int a,b;cin>>a>>b;
	string board[a];
	for(int i=0;i<a;i++) cin>>board[i];
	
	int result=64;
	for(int i=0; i+8<=a; i++) {
		for(int j=0; j+8<=b; j++) {
			result = min(result, min(WBCheck(board, i, j), BWCheck(board, i, j)));
		}
	}
	
	cout << result;
}
