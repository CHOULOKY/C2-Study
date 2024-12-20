#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int minx, maxx, miny, maxy;
	minx=miny=10001;
	maxx=maxy=-10001;
	int n;cin>>n;for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		minx=min(minx,a);
		miny=min(miny,b);
		maxx=max(maxx,a);
		maxy=max(maxy,b);
	}
	cout<<(maxx-minx)*(maxy-miny);
}
