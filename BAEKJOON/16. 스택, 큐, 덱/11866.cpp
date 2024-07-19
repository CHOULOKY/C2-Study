// Title: 요세푸스 문제 0
// Solved by VICLOKY

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int n, m; cin >> n >> m;
	queue<int> que;
	for(int i=0; i<n; i++) que.push(i+1);
	cout << '<';
	while(!que.empty()) {
		for(int i=0; i<m-1; i++) {
			que.push(que.front());
			que.pop();
		}
		if(que.size() == 1) cout << que.front() << '>';
		else cout << que.front() << ", ";
		que.pop();
	}
}
