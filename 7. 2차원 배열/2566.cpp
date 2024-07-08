// Title: ÃÖ´ñ°ª
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b, num, result=-1;
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cin >> num;
			if(result < num) {
				result = num;
				a = i+1; b = j+1;
			}
		}
	}
	cout << result << '\n' << a << ' ' << b;
	
	return 0;
}
