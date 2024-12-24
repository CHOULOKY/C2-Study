#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int num, n; cin >> n;
	deque<int> deq;
	for(int i=0; i<n; i++) {
		cin >> num;
		if(num == 0) deq.push_front(i);
	}
	int count = deq.size();
	for(int i=0; i<n; i++) {
		cin >> num;
		if(!deq.empty() && deq.back() == i && count != 0) {
			deq.pop_back();
			deq.push_front(num);
			count--;
		}
	}
	
	int k; cin >> k;
	for(int i=0; i<k; i++) {
		cin >> num;
		deq.push_back(num);
		cout << deq.front() << ' ';
		deq.pop_front();
	}
}
