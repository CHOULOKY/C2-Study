#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c;cin>>a>>b>>c;
	int maxnum=max(a,max(b,c));
	int othersum=a+b+c-maxnum;
	if(othersum<=maxnum)cout<<othersum*2-1;
	else cout<<a+b+c;
}
