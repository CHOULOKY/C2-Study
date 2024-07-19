// Title: A+B - 5
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	while(cin>>a&&cin>>b) {
		if(a==0&&b==0)break;
		cout << a+b << '\n';
	}
	
	return 0;
}
