#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;string str;for(int i=0;i<n;i++){
		cin>>str;cout<<str[0]<<str.back()<<'\n';
	}
}
