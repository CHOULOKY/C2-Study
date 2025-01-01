#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	auto cmp = [](int a, int b) {
		if(abs(a) == abs(b)) return a > b;
		return abs(a) > abs(b);
	};
	priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
	
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
