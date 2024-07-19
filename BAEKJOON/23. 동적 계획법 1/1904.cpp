// Title: 01≈∏¿œ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int arr[1000001] = {0};

int Fib(int n) {
	arr[0] = arr[1] = 1;
	for(int i=2; i<=n; i++) {
		arr[i] = (arr[i-1] + arr[i-2]) % 15746;
	}
	return arr[n];
}
int main(void) {
	int n; cin >> n;
	cout << Fib(n);
}
