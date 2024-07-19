// Title: 파도반 수열
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	long long arr[101] = {0};
	arr[1] = arr[2] = arr[3] = 1;
	for(int i=4; i<=100; i++) {
		arr[i] = arr[i-2] + arr[i-3];
	}
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		cout << arr[num] << '\n';
	}
}
