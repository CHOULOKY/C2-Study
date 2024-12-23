#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	queue<int> que;
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		switch(str.back()) {
			case 'h': {
				int num; cin >> num;
				que.push(num);
				break;
			}
			case 'p': {
				if(que.empty()) cout << -1;
				else {
					cout << que.front();
					que.pop();
				}
				break;
			}
			case 'e': {
				cout << que.size();
				break;
			}
			case 'y': {
				if(que.empty()) cout << 1;
				else cout << 0;
				break;
			}
			case 't': {
				if(que.empty()) cout << -1;
				else cout << que.front();
				break;
			}
			case 'k': {
				if(que.empty()) cout << -1;
				else cout << que.back();
				break;
			}
		}
		if(str.back() != 'h') cout << '\n';
	}
}
