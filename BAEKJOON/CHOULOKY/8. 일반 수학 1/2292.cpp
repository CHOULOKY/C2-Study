#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;
	stack<int> stk;
	while(a!=0){
		stk.push(a%b);
		a/=b;
	}
	string str="";
	while (!stk.empty()) {
		if(stk.top()>=10) str+=(char)(stk.top()-10+'A');
		else str+=(char)(stk.top()+'0');
        stk.pop();
    }
    cout<<str;
}

