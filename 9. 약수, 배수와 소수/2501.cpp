// Title: 약수 구하기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	int count=0;
	for(int i=1; i<=a; i++) {
		if(a%i==0) count++;
		if(count==b) {
			cout << i; return 0;
		}
	}
	cout << 0;
}
