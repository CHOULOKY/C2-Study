// Title: 직사각형에서 탈출
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int x,y,w,h; cin>>x>>y>>w>>h;
	int result=1000;
	if(w-x>x) result=min(result,x);
	else result=min(result,w-x);
	if(h-y>y) result=min(result,y);
	else result=min(result,h-y);
	cout<<result;
}
