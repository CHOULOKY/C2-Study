#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	deque<pair<int, int>> deq;
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		deq.push_back({num, i+1});
	}
	
	while(!deq.empty()) {
		cout << deq.front().second << ' ';
		int front = deq.front().first;
		deq.pop_front();
		if(front > 0) {
			for(int i=0; i<front-1; i++) {
				deq.push_back({deq.front().first, deq.front().second});
				deq.pop_front();
			}
		}
		else {
			for(int i=0; i<abs(front); i++) {
				deq.push_front({deq.back().first, deq.back().second});
				deq.pop_back();
			}
		}
	}
}

