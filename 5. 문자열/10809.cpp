// Title: ¾ËÆÄºª Ã£±â
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	map<char, int> m;
	string a = "abcdefghijklmnopqrstuvwxyz";
	for(int i=0; i<a.size(); i++) m.insert(pair<char, int>(a[i], -1));
	string str; cin >> str;
	for(int i=0; i<str.size(); i++) if(m[str[i]] == -1) m[str[i]] = i;
	for(auto iter:m) cout << iter.second << ' ';
	
	return 0;
}

