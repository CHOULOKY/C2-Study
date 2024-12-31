#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	
	int a[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	int k; cin >> m >> k;
	int b[m][k];
	for(int i=0; i<m; i++) {
		for(int j=0; j<k; j++) {
			cin >> b[i][j];
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			int temp = 0;
			for(int k=0; k<m; k++) {
				temp += a[i][k] * b[k][j];
			}
			cout << temp << ' ';
		}
		cout << '\n';
	}
}
