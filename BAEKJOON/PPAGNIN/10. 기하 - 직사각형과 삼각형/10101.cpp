// Title: 삼각형 외우기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin>>a>>b>>c;
	if(a==b&&b==c) cout<<"Equilateral";
	else if(a+b+c==180&&(a==b||b==c||c==a)) cout<<"Isosceles";
	else if(a+b+c==180) cout<<"Scalene";
	else cout<<"Error";
}
