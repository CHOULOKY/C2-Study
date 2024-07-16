// Title: N-Queen
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int result=0;
bool check(int row, vector<int>& vec) {
	for(int i=0; i<row; i++) {
		if(vec[row] == vec[i] || abs(vec[row] - vec[i]) == row - i) return false;
	}
	return true;
}
void nQueen(int n, vector<int>& vec, int row) {
	if(row==n) {
		result++;
		return;
	}
	for(int i=0; i<n; i++) {
		vec[row] = i;
		if(check(row, vec)) {
			nQueen(n, vec, row+1);
		}
	}
}
int main(void) {
	int n; cin >> n;
	vector<int> vec(n);
	nQueen(n, vec, 0);
	cout << result;
}
