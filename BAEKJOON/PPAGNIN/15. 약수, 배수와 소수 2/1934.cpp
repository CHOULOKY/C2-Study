// Title: 최소공배수
// Solved by VICLOKY

#include <iostream>
using namespace std;

int Euclidean(int a, int b) {
	int temp, left=a, right=b;
	while(right != 0) {
		temp = left % right;
		left = right;
		right = temp;
	}
	return (a*b)/left;
}
int main(void) {
	int n; cin >> n;
	for(int k=0; k<n; k++) {
		int a, b; cin >> a >> b;
		cout << Euclidean(a, b) << '\n';
	}
}
