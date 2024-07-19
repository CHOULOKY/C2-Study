// Title: ±ÕÇüÀâÈù ¼¼»ó
// Solved by VICLOKY

#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	string str;
	while(getline(cin, str, '\n')) {
		if(str == ".") break;
		bool check=true;
		stack<int> stk;
		for(int i=0; i<str.size(); i++) {
			if(str[i]=='(' || str[i]=='[') stk.push(str[i]);
			else if(str[i]==')') {
				if(stk.empty() || stk.top() != '(') {
					check = false; break;
				}
				stk.pop();
			}
			else if(str[i]==']') {
				if(stk.empty() || stk.top() != '[') {
					check = false; break;
				}
				stk.pop();
			}
		}
		if(!stk.empty()) check = false;
		if(check) cout << "yes\n";
		else cout << "no\n";
	}
}

