#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	int maxnum = 0, minnum = 1000000;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		maxnum = max(maxnum, num);
		minnum = min(minnum, num);
	}
	cout << maxnum * minnum;
}
