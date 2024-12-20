#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a1,a0,c,n;cin>>a1>>a0>>c>>n;
	int fn=a1*n+a0;
	int gn=n*c;
	if(fn<=gn&&a1<=c)cout<<1;
	else cout<<0;
}
