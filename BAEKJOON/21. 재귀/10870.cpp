// Title: 피보나치 수 5
// Solved by VICLOKY

#include <iostream>
using namespace std;

int Fibonacci(int n) {
	if(n == 1 || n == 0) return n;
	return Fibonacci(n-1) + Fibonacci(n-2);
}
int main(void) {
	int n; cin >> n;
	cout << Fibonacci(n);
}
