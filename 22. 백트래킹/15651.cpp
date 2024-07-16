// Title: N°ú M (3)
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

void pick(int n, int m, vector<int>& picked) {
	if(m==0) {
		for(auto iter:picked) cout << iter+1 << ' ';
		cout << '\n';
		return;
	}
	for(int i=0; i<n; i++) {
		picked.push_back(i);
		pick(n, m-1, picked);
		picked.pop_back();
	}
}
int main(void) {
	int n, m; cin >> n >> m;
	vector<int> vec;
	pick(n, m, vec);
}
