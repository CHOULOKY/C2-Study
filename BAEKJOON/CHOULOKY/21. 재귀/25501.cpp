#include <iostream>
using namespace std;

int count;

int recursion(const string& str, int left, int right) {
	count++;
	if(left >= right) return 1;
	else if(str[left] != str[right]) return 0;
	else return recursion(str, left+1, right-1);
}

int isPalindrome(const string& str) {
	return recursion(str, 0, str.length()-1);
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		
		count = 0;
		cout << isPalindrome(str) << ' ';
		cout << count << '\n';
	}
}
