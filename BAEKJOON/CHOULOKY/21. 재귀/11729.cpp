#include <iostream>
using namespace std;

void hanoi(int n, int start, int to, int by) {
	if(n==1) cout << start << ' ' << to << '\n';
	else {
		hanoi(n-1, start, by, to);
		cout << start << ' ' << to << '\n';
		hanoi(n-1, by, to, start);
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	cout << (1<<n)-1 << '\n';
	hanoi(n, 1, 3, 2);
}
