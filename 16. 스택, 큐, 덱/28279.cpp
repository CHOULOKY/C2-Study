// Title: µ¦ 2
// Solved by VICLOKY

#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	deque<int> deq;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		switch(num) {
			case 1: {
				int num; cin >> num;
				deq.push_front(num);
				break;
			}
			case 2: {
				int num; cin >> num;
				deq.push_back(num);
				break;
			}
			case 3: {
				if(deq.empty()) cout << "-1\n";
				else {
					cout << deq.front() << '\n';
					deq.pop_front();
				}
				break;
			}
			case 4: {
				if(deq.empty()) cout << "-1\n";
				else {
					cout << deq.back() << '\n';
					deq.pop_back();
				}
				break;
			}
			case 5: {
				cout << deq.size() << '\n';
				break;
			}
			case 6: {
				cout << deq.empty() << '\n';
				break;
			}
			case 7: {
				if(deq.empty()) cout << "-1\n";
				else cout << deq.front() << '\n';
				break;
			}
			case 8: {
				if(deq.empty()) cout << "-1\n";
				else cout << deq.back() << '\n';
				break;
			}
		}
	}
}
