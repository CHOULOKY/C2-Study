#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str;cin>>str;
	int mid=str.length()/2;
	string a=str.substr(0, str.length()%2==0?mid:mid+1), b=str.substr(mid,str.length());
	reverse(a.begin(),a.end());
	if(a==b)cout<<1;else cout<<0;
}
