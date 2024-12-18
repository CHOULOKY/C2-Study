// Title: 배수와 약수
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	while(cin >> a >> b) {
		if(a==0&&b==0) break;
		else if(a%b==0) cout<<"multiple\n";
		else if(b%a==0) cout<<"factor\n";
		else cout<<"neither\n";
	}
}
