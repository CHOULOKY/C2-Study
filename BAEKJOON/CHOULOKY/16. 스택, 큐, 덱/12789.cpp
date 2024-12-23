#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	stack<int> stk;
	int n; cin >> n;
	int next = 1;
	for(int i=0; i<n; i++) {
		while(!stk.empty() && stk.top() == next) {
			next++;
			stk.pop();
		}
		
		int num; cin >> num;
		if(num == next) {
			next++;
		}
		else {
			stk.push(num);
		}
	}
	
	while(!stk.empty() && stk.top() == next) {
		next++;
		stk.pop();
	}
	
	if(stk.empty()) cout << "Nice";
	else cout << "Sad";
}
