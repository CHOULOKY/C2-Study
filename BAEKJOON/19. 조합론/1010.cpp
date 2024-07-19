// Title: 다리 놓기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		int result=1, temp=0;
		for(int j=b; j>b-a; j--) {
			result *= j;
			result /= ++temp;
		}
		cout << result << '\n';
	}
}
