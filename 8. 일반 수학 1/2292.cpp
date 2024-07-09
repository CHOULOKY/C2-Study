// Title: ¹úÁı
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int start=1, plus=0, result=1;
	while(n > start) {
		result++;
		start += (plus+=6);
	}
	cout << result;
	
	return 0;
}

