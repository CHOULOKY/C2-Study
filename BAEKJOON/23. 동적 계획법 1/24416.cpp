// Title: 알고리즘 수업 - 피보나치 수 1
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
void fibo(int n) {
	vec.push_back(0);
	vec.push_back(1);
	for(int i=2; i<n+1; i++) {
		vec.push_back(vec[i-1] + vec[i-2]);
	}
	cout << vec[n] << ' ' << n-2;
}
int main(void) {
	int n; cin >> n;
	fibo(n);
}
