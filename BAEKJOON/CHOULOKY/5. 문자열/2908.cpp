#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string a,b;cin>>a>>b;
	reverse(a.begin(),a.end());reverse(b.begin(),b.end());
	if(stoi(a) > stoi(b))cout<<a;
	else cout<<b;
}
