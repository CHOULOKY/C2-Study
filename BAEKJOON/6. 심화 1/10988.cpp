// Title: 팰린드롬인지 확인하기
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	string str; cin >> str;
	string a, b;
	a = str.substr(0, str.size()/2);
	if(str.size()%2==0) b = str.substr(str.size()/2, str.size());
	else b = str.substr(str.size()/2+1, str.size());
	reverse(a.begin(), a.end());
	if(a==b) cout << 1;
	else cout << 0;
	
	return 0;
}
