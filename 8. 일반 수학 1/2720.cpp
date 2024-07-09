// Title: ºº≈πº“ ªÁ¿Â µø«ı
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		cout << num/25 << ' ';
		num %= 25;
		cout << num/10 << ' ';
		num %= 10;
		cout << num/5 << ' ';
		num %= 5;
		cout << num << '\n';
	}
	
	return 0;
}

