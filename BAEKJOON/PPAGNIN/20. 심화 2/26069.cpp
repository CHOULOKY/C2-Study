// Title: ∫Ÿ¿”º∫ ¡¡¿∫ √—√—¿Ã
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n; cin >> n;
	map<string, bool> mp;
	mp.insert({"ChongChong", true});
	for(int i=0; i<n; i++) {
		string a, b; cin >> a >> b;
		if(mp[a] || mp[b]) {
			mp[a] = mp[b] = true;
		}
	}
	int result=0;
	for(auto iter:mp) {
		if(iter.second) result++;
	}
	cout << result;
}
