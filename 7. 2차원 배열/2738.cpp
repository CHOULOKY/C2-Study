// Title: Çà·Ä µ¡¼À
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m; cin >> n >> m;
	int res[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> res[i][j];
		}
	}
	int num;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> num;
			cout << (res[i][j] += num) << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
