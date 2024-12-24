#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		int result = 1, divide = 1;
		for(int i=b; i>b-a; i--) {
			result *= i;
			result /= divide++;
		}
		cout << result << '\n';
	}
}
