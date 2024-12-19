#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;
	for(int i=1;i<=n*2-1;i++){
		for(int j=1;j<=abs(n-i);j++)cout<<' ';
		for(int j=1;j<=abs((n*2-1)-abs(n-i)*2);j++)cout<<'*';
		cout<<'\n';
	}
}

