#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;for(int i=0;i<n;i++){
		int a;cin>>a;
		cout<<a/25<<' ';
		a%=25;
		cout<<a/10<<' ';
		a%=10;
		cout<<a/5<<' ';
		a%=5;
		cout<<a/1<<'\n';
	}
}
