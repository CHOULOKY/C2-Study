// Title: 단어 공부
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	string str; cin >> str;
	map<char, int> m;
	for(int i=0; i<str.size(); i++) {
		if(str[i] > 'A') str[i] = toupper(str[i]);
		m[str[i]]++;
	}
	int maxCount=0;
	char result;
	for(auto iter:m) {
		if(maxCount < iter.second) {
			maxCount = iter.second;
			result = iter.first;
		}
		else if (maxCount == iter.second) result = '?';
	}
	cout << result;
	
	return 0;
}
