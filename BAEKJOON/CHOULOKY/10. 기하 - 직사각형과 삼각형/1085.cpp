#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,c,d;cin>>a>>b>>c>>d;
	int result=min(c-a, a);
	result=min(result, min(d-b, b));
	cout<<result;
}
