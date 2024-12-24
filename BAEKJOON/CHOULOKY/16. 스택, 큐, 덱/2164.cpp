#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	queue<int> que;
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		que.push(i+1);
	}
	while(que.size() != 1) {
		que.pop();
		que.push(que.front());
		que.pop();
	}
	cout << que.front();
}
