// Title: Ω∫≈√ 2
// Solved by VICLOKY

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	stack<int> stk;
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		switch(num) {
			case 1: {
				int temp; cin >> temp;
				stk.push(temp);
				break;
			}
			case 2: {
				if(stk.empty()) cout << -1 << '\n';
				else {
					cout << stk.top() << '\n';
					stk.pop();
				}
				break;
			}
			case 3: {
				cout << stk.size() << '\n';
				break;
			}
			case 4: {
				if(stk.empty()) cout << 1 << '\n';
				else cout << 0 << '\n';
				break;
			}
			case 5: {
				if(stk.empty()) cout << -1 << '\n';
				else cout << stk.top() << '\n';
				break;
			}
		}
	}
}
