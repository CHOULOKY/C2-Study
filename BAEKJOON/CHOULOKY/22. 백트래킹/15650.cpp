#include <iostream>
#include <vector>
using namespace std;

void pick(vector<int>& picked, int n, int m) {
	if(m == 0) {
		for(auto iter:picked) {
			cout << iter << ' ';
		}
		cout << '\n';
		return;
	}
	
	int start = picked.empty() ? 1 : picked.back() + 1;
	
	for(int next=start; next<=n; next++) {
		picked.push_back(next);
		pick(picked, n, m-1);
		picked.pop_back();
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int m; cin >> m;
	
	vector<int> picked;
	pick(picked, n, m);
}
