#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;string str;cin>>str;n=0;
	for(int i=0;i<str.length();i++)n+=str[i]-'0';
	cout<<n;
}
