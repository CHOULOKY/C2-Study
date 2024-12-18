#include <iostream>
using namespace std;

int main(void) {
	int total, count; cin>>total>>count;
	for(int i=0;i<count;i++){
		int a,b;cin>>a>>b;
		total -= a*b;
	}
	if(total==0)cout<<"Yes";
	else cout<<"No";
}

