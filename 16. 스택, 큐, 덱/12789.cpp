// Title: 도키도키 간식드리미
// Solved by VICLOKY

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n; cin >> n;
	int list[n];
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		list[i] = num;
	}
	int pos=1, i=0;
	stack<int> stk;
	while(i<=n && pos <= n) {
		if(list[i] == pos) {
			i++;
			pos++;
		}
		else if(!stk.empty() && stk.top() == pos) {
			stk.pop();
			pos++;
		}
		else {
			stk.push(list[i]);
			i++;
		}
	}
	if(stk.empty()) cout << "Nice";
	else cout << "Sad";
}

