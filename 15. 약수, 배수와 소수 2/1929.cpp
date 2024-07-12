// Title: 소수 구하기
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

bool isSosu(int num) {
	if(num < 2) return false;
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i==0) return false;
	}
	return true;
}
int main(void) {
	int a, b; cin >> a >> b;
	for(int i=a; i<=b; i++) {
		if(isSosu(i)) cout << i << '\n';
	}
}
