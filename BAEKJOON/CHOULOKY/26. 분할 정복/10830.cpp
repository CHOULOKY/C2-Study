#include <iostream>
using namespace std;

long long n, b;
long long arr[5][5], ans[5][5], tmp[5][5];

void matrix(long long x[5][5], long long y[5][5]) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			tmp[i][j] = 0;
			for(int k=0; k<n; k++) {
				tmp[i][j] += x[i][k] * y[k][j];
				tmp[i][j] %= 1000;
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			x[i][j] = tmp[i][j];
		}
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n >> b;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = (i == j ? 1 : 0);
        }
    }
	
	while (b > 0) {
        if (b % 2 == 1) {
            matrix(ans, arr);
        }
        matrix(arr, arr);
        b /= 2;
    }
    
    for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
}
