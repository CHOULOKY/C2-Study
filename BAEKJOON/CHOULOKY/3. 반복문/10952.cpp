#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;cout<<a+b<<'\n';
	}
}
