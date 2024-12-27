#include <iostream>
using namespace std;

int self=0, dynamic=0;

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    else {
    	self++;
		return (fib(n - 1) + fib(n - 2));
	}
}

void fibonacci(int n) {
	int arr[n+1];
	arr[1] = arr[2] = 1;
	for(int i=3; i<=n; i++) {
		arr[i] = arr[i-1] + arr[i-2];
		dynamic++;
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	
	fib(n);
	fibonacci(n);
	
	cout << self+1 << ' ' << dynamic;
}
