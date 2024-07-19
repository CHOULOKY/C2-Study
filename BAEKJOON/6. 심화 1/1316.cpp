// Title: 그룹 단어 체커
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int result=0;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		result++;
		bool isExist[26];
		for(int j=0; j<26; j++) isExist[j] = false;
		for(int j=0; j<str.size(); j++) {
			if(isExist[str[j]-'a']==false)isExist[str[j]-'a'] = true;
			else if(j!=0 && str[j]!=str[j-1] && isExist[str[j]-'a']==true) {
				result--; break;
			}
		}
	}
	cout << result;
	
	return 0;
}
