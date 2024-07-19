// Title: ¼Ò¼ö
// Solved by VICLOKY

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

bool Sosu(int num) {
	if(num==1) return false;
	for(int i=2; i<=sqrt(num); i++) {
		if(num%i==0) return false;
	}
	return true;
}
int main(void) {
	int a, b; cin >> a >> b;
	int sumres=0, minres=INT_MAX;
	for(int i=a; i<=b; i++) {
		if(Sosu(i)) {
			sumres += i;
			minres = min(minres, i);
		}
	}
	if(sumres==0) cout << -1;
	else cout << sumres << '\n' << minres;
}
