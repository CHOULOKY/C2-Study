#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c;cin>>a>>b>>c;
	if(a==b&&b==c&&a==60)cout<<"Equilateral";
	else if(a+b+c==180&&(a==b||b==c||c==a))cout<<"Isosceles";
	else if(a+b+c==180&&(a!=b&&b!=c&&c!=a))cout<<"Scalene";
	else cout<<"Error";
}

