// Title: °ñµå¹ÙÈå ÆÄÆ¼¼Ç
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	vector<bool> vec(1000001); // false = sosu
	for(int i=2; i<500001; i++) {
		for(int j=i*2; j<1000001; j+=i) {
			vec[j] = true;
		}
	}
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		int count=0;
		for(int j=2; j<=num/2; j++) {
			if(!vec[j] && !vec[num-j]) count++;
		}
		cout << count << '\n';
	}
}
