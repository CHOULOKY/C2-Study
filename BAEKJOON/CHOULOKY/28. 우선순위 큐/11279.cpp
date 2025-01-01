#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	priority_queue<int, vector<int>, less<int>> pq;
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(num == 0) {
			if(pq.empty()) cout << 0;
			else {
				cout << pq.top();
				pq.pop();
			}
			cout << '\n';
		}
		else {
			pq.push(num);
		}
	}
}
