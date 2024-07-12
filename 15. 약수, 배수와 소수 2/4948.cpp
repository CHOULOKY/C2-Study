// Title: 베르트랑 공준
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
	int num;
	while(cin >> num) {
		if(num == 0) break;
		int count=0;
		for(int i=num+1; i<=2*num; i++) {
			if(isSosu(i)) count++;
		}
		cout << count << '\n';
	}
}
