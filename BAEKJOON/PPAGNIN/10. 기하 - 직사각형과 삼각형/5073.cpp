// Title: 삼각형과 세 변
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a,b,c;
	while(cin>>a>>b>>c){
		if(a==0&&b==0&&c==0)break;
		int maxnum=a;
		maxnum=max(maxnum,b);
		maxnum=max(maxnum,c);
		if(maxnum>=a+b+c-maxnum)cout<<"Invalid";
		else if(a==b&&b==c&&c==a)cout<<"Equilateral";
		else if(a==b||b==c||c==a)cout<<"Isosceles";
		else cout<<"Scalene";
		cout<<'\n';
	}
}
