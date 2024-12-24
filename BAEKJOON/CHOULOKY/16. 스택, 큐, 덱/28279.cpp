#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	deque<int> deq;
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		switch(num) {
			case 1: {
				int insert; cin >> insert;
				deq.push_front(insert);
				break;
			}
			case 2: {
				int insert; cin >> insert;
				deq.push_back(insert);
				break;
			}
			case 3: {
				if(deq.empty()) cout << -1;
				else {
					cout << deq.front();
					deq.pop_front();
				}
				break;
			}
			case 4: {
				if(deq.empty()) cout << -1;
				else {
					cout << deq.back();
					deq.pop_back();
				}
				break;
			}
			case 5: {
				cout << deq.size();
				break;
			}
			case 6: {
				if(deq.empty()) cout << 1;
				else cout << 0;
				break;
			}
			case 7: {
				if(deq.empty()) cout << -1;
				else {
					cout << deq.front();
				}
				break;
			}
			case 8: {
				if(deq.empty()) cout << -1;
				else {
					cout << deq.back();
				}
				break;
			}
		}
		if(num != 1 && num != 2) cout << '\n';
	}
}
