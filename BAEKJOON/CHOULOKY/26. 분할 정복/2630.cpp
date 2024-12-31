#include <iostream>
using namespace std;

int wresult = 0;
int bresult = 0;
int paper[128][128];

void cut(int x, int y, int n) {
	bool white = false, blue = false;
	for(int i=x; i<x+n; i++) {
		for(int j=y; j<y+n; j++) {
			if(paper[i][j] == 0) white = true;
			else blue = true;
			
			if(white && blue) {
				cut(x, y, n/2);
				cut(x, y+n/2, n/2);
				cut(x+n/2, y, n/2);
				cut(x+n/2, y+n/2, n/2);
				return;
			}
		}
	}
	if(white != blue) {
		if(white) wresult++;
		else bresult++;
	}
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
	
	cout << wresult << '\n' << bresult;
}
