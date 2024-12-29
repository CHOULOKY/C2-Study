#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	
	int arr[n+1][n+1];
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=n; j++) {
			if(i==0 || j==0) arr[i][j] = 0;
			else {
				int num; cin >> num;
				arr[i][j] = arr[i][j-1] + num;
			}
		}
	}
	
	for(int i=0; i<m; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = 0;
		for(int j=x1; j<=x2; j++) {
			result += arr[j][y2] - arr[j][y1-1];
		}
		cout << result << '\n';
	}
}
