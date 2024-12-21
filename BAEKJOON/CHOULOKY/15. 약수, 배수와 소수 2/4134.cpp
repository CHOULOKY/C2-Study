#include <iostream>
using namespace std;

bool GetSosu(long long num) {
	if(num < 2) return false;
	for(long long i=2; i*i<=num; i++) {
		if(num%i == 0) return false;
	}
	return true;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	
	long long num;
	while(n--) {
		cin >> num;
		while(!GetSosu(num)) {
			num++;
		}
		cout << num << '\n';
	}
}
