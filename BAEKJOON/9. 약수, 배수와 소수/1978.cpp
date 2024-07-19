// Title: 소수 찾기
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

bool Sosu(int num) {
	if(num==1) return false;
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i==0) return false;
	}
	return true;
}
int main(void) {
	int n; cin >> n;
	int result=0;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(Sosu(num)) result++;
	}
	cout << result;
}
