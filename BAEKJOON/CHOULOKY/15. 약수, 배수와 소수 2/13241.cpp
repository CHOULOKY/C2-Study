#include <iostream>
using namespace std;

long long GetNumber(int a, int b) {
	int temp, left = a, right = b;
	while(right != 0) {
		temp = left % right;
		left = right;
		right = temp;
	}
	return (long long)a*b/left;
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	cout << GetNumber(a, b);
}
