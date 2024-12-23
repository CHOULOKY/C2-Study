#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	stack<int> stk;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		switch(num) {
			case 1: {
				int temp; cin >> temp;
				stk.push(temp);
				break;
			}
			case 2: {
				if(stk.empty()) cout << -1;
				else {
					cout << stk.top();
					stk.pop();
				}
				break;
			}
			case 3: {
				cout << stk.size();
				break;
			}
			case 4: {
				if(stk.empty()) cout << 1;
				else cout << 0;
				break;
			}
			case 5: {
				if(stk.empty()) cout << -1;
				else cout << stk.top();
				break;
			}
		}
		if(num != 1) cout << '\n';
	}
}
