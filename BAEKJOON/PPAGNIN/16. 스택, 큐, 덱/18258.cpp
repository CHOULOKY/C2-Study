// Title: ť 2
// Solved by VICLOKY

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	queue<int> que;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		switch(str[1]) {
			case 'u': {
				int num; cin >> num;
				que.push(num);
				break;
			}
			case 'o': {
				if(que.empty()) cout << "-1\n";
				else {
					cout << que.front() << '\n';
					que.pop();
				}
				break;
			}
			case 'i': {
				cout << que.size() << '\n';
				break;
			}
			case 'm': {
				if(que.empty()) cout << "1\n";
				else cout << "0\n";
				break;
			}
			case 'r': {
				if(que.empty()) cout << "-1\n";
				else cout << que.front() << '\n';
				break;
			}
			case 'a': {
				if(que.empty()) cout << "-1\n";
				else cout << que.back() << '\n';
				break;
			}
		}
	}
}
