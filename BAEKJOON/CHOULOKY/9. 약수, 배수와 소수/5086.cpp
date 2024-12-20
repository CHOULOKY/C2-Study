#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;
	while(cin>>a>>b){
		if(a==b)break;
		else if(b%a==0)cout<<"factor";
		else if(a%b==0)cout<<"multiple";
		else cout<<"neither";
		cout<<'\n';
	}
}
