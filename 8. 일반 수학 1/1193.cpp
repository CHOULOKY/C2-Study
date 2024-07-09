// Title: 분수찾기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int i=0;
	while(n>i) n -= i++;
	if(i%2==0) cout << n << '/' << i-n+1;
	else cout << i-n+1 << '/' << n;
}

