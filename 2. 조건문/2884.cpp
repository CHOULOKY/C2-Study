// Title: 알람 시계
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	if((b-=45)<0) {
		if((a-=1)<0) a=23;
		b+=60;
	}
	cout << a << ' ' << b;
	
	return 0;
}

