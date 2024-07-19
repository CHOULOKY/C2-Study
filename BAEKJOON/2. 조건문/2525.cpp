// Title: ¿Àºì ½Ã°è
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	
	if((b += c%60)>=60) {a++; b %= 60;}
	a = (a += c/60)%24;
	cout << a << ' ' << b;
	
	return 0;
}

