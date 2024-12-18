// Title: 칸토어 집합
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

void Cantor(int n) {
	if(n==0) {
		cout << '-';
		return;
	}
	Cantor(n-1);
	for(int i=0; i<pow(3, n-1); i++) cout << ' ';
	Cantor(n-1);
}
int main(void) {
	int n;
	while(cin >> n) {
		Cantor(n);
		cout << '\n';
	}
}
