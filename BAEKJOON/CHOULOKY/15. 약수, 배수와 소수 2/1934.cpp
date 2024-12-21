#include <iostream>
using namespace std;

int GetNumber(int a, int b) {
	int temp, left = a, right = b;
	while(right != 0) {
		temp = left % right;
		left = right;
		right = temp;
	}
	return a*b/left;
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		cout << GetNumber(a, b) << '\n';
	}
}
