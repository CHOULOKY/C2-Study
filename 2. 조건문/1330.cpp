// Title: 두 수 비교하기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	if(a>b) cout << '>';
	else if(a<b) cout << '<';
	else cout<<"==";
	
	return 0;
}

