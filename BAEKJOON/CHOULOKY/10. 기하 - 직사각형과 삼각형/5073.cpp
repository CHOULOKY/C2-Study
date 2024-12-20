#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c;
	while(cin>>a>>b>>c){
		if(a==b&&b==c&&a==0)break;
		
		int maxnum=max(a,max(b,c));
		if(a+b+c-maxnum<=maxnum)cout<<"Invalid";
		else if(a==b&&b==c)cout<<"Equilateral";
		else if(a==b||b==c||c==a)cout<<"Isosceles";
		else cout<<"Scalene";
		cout<<'\n';
	}
}

