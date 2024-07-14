// Title: Á¦·Î
// Solved by VICLOKY

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n; cin >> n;
	stack<int> stk;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(!num && !stk.empty()) stk.pop();
		else stk.push(num);
	}
	int result=0;
	while(!stk.empty()) {
		result += stk.top();
		stk.pop();
	}
	cout << result;
}
