#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,n;cin>>n;string str;for(int i=0;i<n;i++){
		cin>>a>>str;for(int j=0;j<str.length();j++)for(int k=0;k<a;k++)cout<<str[j];cout<<'\n';
	}
}
