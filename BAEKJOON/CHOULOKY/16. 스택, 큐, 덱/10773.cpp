#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	stack<int> stk;
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(num == 0 && !stk.empty()) stk.pop();
		else if(num != 0) stk.push(num);
	}
	
	int result = 0;
	while(!stk.empty()) {
		result += stk.top();
		stk.pop();
	}
	cout << result;
}
