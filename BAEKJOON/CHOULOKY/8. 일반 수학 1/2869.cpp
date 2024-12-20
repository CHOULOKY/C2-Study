#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;
	int count=1, mul=6;
	while(n>1){
		n -= mul;
		count++; mul+=6;
	}
	cout<<count;
}

