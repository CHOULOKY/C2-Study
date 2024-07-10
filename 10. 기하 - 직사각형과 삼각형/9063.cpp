// Title: ´ëÁö
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin>>n;
	int xmin=10000, ymin=10000, xmax=-10000, ymax=-10000;
	for(int i=0; i<n; i++) {
		int x, y; cin>>x>>y;
		xmin=min(xmin,x);
		ymin=min(ymin,y);
		xmax=max(xmax,x);
		ymax=max(ymax,y);
	}
	if(n==1) cout<<0;
	else cout<<(xmax-xmin)*(ymax-ymin);
}
