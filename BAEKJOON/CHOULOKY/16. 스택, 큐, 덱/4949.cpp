#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	string str;
	while(getline(cin, str)) {
		if(str == ".") break;
		
		stack<char> stk;
		string result = "yes";
		
		for(int i=0; i<str.length(); i++) {
			if(str[i] == '(' || str[i] == '[') stk.push(str[i]);
			else if(str[i] == ')') {
				if(!stk.empty() && stk.top() == '(') stk.pop();
				else {
					result = "no";
					break;
				}
			}
			else if(str[i] == ']') {
				if(!stk.empty() && stk.top() == '[') stk.pop();
				else {
					result = "no";
					break;
				}
			}
		}
		
		if(!stk.empty()) result = "no";
		cout << result << '\n';
	}
}
