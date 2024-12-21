#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	map<string, int> smap;
	map<int, string> imap;
	
	string str;
	for(int i=0; i<a; i++) {
		cin >> str;
		smap.insert(make_pair(str, i+1));
		imap.insert(make_pair(i+1, str));
	}
	for(int i=0; i<b; i++) {
		cin >> str;
		if(isdigit(str[0])) cout << imap[stoi(str)] << '\n';
		else cout << smap[str] << '\n';
	}
}
