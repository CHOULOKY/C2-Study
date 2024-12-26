#include <iostream>
using namespace std;

void star(int n, int i, int j) {
	if(i/n%3 == 1 && j/n%3 == 1) {
		cout << ' ';
	}
	else {
		if(n/3 == 0) {
			cout << '*';
		}
		else {
			star(n/3, i, j);
		}
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			star(n, i, j);
		}
		cout << '\n';
	}
}
