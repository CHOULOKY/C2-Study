// Title: 최소공배수
// Solved by VICLOKY

#include <iostream>
using namespace std;

long long Euclidean(long long a, long long b) {
	long long temp, left=a, right=b;
	while(right != 0) {
		temp = left%right;
		left = right;
		right = temp;
	}
	return (a*b)/left;
}
int main(void) {
	long long a, b; cin >> a >> b;
	cout << Euclidean(a, b);
}
