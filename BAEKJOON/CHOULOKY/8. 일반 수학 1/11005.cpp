#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c;cin>>a>>b>>c;
	int result=(c-a)/(a-b);
	if((c-a)%(a-b)!=0)result+=1;
	cout<<result+1;
}

