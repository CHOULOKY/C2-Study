#include <iostream>
using namespace std;

long long c;

long long divide(long long a, long long b) {
	if(b == 0) return 1;
	if(b == 1) return a % c;
	
	long long k = divide(a, b/2);
	if(b%2==0) return k * k % c;
	return k * k % c * a % c;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	long long a, b; cin >> a >> b >> c;
	
	cout << divide(a, b);
}
