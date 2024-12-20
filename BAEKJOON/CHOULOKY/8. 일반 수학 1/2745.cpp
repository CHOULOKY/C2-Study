#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;
	int dot=2;
	while(n--)dot+=dot-1;
	cout<<dot*dot;
}

