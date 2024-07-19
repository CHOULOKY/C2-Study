// Title: ¾à¼ö
// Solved by VICLOKY

#include <iostream>
#include <climits>
using namespace std;

int main(void) {
	int n; cin >> n;
	int maxres=0, minres=INT_MAX;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		maxres = max(maxres, num);
		minres = min(minres, num);
	}
	cout << maxres*minres;
}
