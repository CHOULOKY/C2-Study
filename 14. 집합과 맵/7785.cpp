// Title: 회사에 있는 사람
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n; cin >> n;
	map<string, bool, greater<string>> mp;
	for(int i=0; i<n; i++) {
		string a, b; cin >> a >> b;
		if(mp[a]) mp.erase(a);
		else mp[a]=1;
	}
	for(auto iter:mp) cout << iter.first << '\n';
}
