// Title: ¼¼ ¸·´ë
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a,b,c; cin>>a>>b>>c;
	int maxnum=a;
	maxnum=max(maxnum,b);
	maxnum=max(maxnum,c);
	if(maxnum>=a+b+c-maxnum) cout<<a+b+c-maxnum+(maxnum=a+b+c-maxnum-1);
	else cout<<a+b+c;
}

