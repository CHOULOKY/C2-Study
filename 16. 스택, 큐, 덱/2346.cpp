// Title: «≥º± ≈Õ∂ﬂ∏Æ±‚
// Solved by VICLOKY

#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	int n; cin >> n;
	deque<pair<int, int>> deq;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		deq.push_back({num, i+1});
	}
	while(!deq.empty()) {
		int num = deq.front().first;
		cout << deq.front().second << ' ';
		deq.pop_front();
		if(num > 0) {
			for(int i=0; i<num-1; i++) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		else {
			for(int i=0; i<abs(num); i++) {
				deq.push_front(deq.back());
				deq.pop_back();
			}
		}
	}
}
