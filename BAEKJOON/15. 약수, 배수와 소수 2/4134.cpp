// Title: 다음 소수
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

bool isSosu(size_t num) {
	if(num <= 1) return false;
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i==0) return false;
	}
	return true;
}
int main(void) {
	int n; cin>>n;
	for(int i=0; i<n; i++) {
		size_t num; cin >> num;
		while(!isSosu(num)){
			num++;
		}
		cout << num << '\n';
	}
}
