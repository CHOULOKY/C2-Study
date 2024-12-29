#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m, k; cin >> n >> m >> k;
	
	vector<string> board(n);
	for(int i=0; i<n; i++) {
		cin >> board[i];
	}
	
	vector<vector<int>> cost_B(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> cost_W(n + 1, vector<int>(m + 1, 0));
    
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			int isBlack = (i + j) % 2 == 0; // B start
			cost_B[i + 1][j + 1] = cost_B[i][j + 1] + cost_B[i + 1][j] - cost_B[i][j] + (board[i][j] != (isBlack ? 'B' : 'W'));
            cost_W[i + 1][j + 1] = cost_W[i][j + 1] + cost_W[i + 1][j] - cost_W[i][j] + (board[i][j] != (isBlack ? 'W' : 'B'));
		}
	}
	
	int result = 1e9;
	for(int i=k; i<=n; i++) {
		for(int j=k; j<=m; j++) {
			int total_B = cost_B[i][j] - cost_B[i-k][j] - cost_B[i][j-k] + cost_B[i-k][j-k];
			int total_W = cost_W[i][j] - cost_W[i-k][j] - cost_W[i][j-k] + cost_W[i-k][j-k];
			result = min({result, total_B, total_W});
		}
	}
    
    cout << result;
}
