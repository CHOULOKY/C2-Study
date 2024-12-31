#include <iostream>
#include <cmath>
using namespace std;

int aresult=0, bresult=0, cresult=0;
int paper[2187][2187];

void cut(int x, int y, int n) {
	int first = paper[x][y];
	for(int i=x; i<x+n; i++) {
		for(int j=y; j<y+n; j++) {
			if(paper[i][j] != first) {
				cut(x, y, n/3);
				cut(x, y+n/3, n/3);
				cut(x, y+n/3*2, n/3);
				cut(x+n/3, y, n/3);
				cut(x+n/3, y+n/3, n/3);
				cut(x+n/3, y+n/3*2, n/3);
				cut(x+n/3*2, y, n/3);
				cut(x+n/3*2, y+n/3, n/3);
				cut(x+n/3*2, y+n/3*2, n/3);
				return;
			}
		}
	}
	
	if(first == -1) aresult++;
	else if(first == 0) bresult++;
	else cresult++;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> paper[i][j];
		}
	}
	
	cut(0, 0, n);
	
	cout << aresult << '\n' << bresult << '\n' << cresult;
}
