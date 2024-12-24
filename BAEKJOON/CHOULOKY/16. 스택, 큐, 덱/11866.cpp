#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	queue<int> que;
	int n, k; cin >> n >> k;
	for(int i=0; i<n; i++) {
		que.push(i+1);
	}
	
	cout << '<';
	while(!que.empty()) {
		for(int i=0; i<k-1; i++) {
			que.push(que.front());
			que.pop();
		}
		cout << que.front();
		if(que.size() != 1) cout << ", ";
		que.pop();
	}
	cout << '>';
}
