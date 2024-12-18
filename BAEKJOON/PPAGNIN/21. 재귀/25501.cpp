// Title: ¿Á±Õ¿« ±Õ¿Á
// Solved by VICLOKY

#include <iostream>
using namespace std;

int recursion(string& s, int l, int r, int* count) {
	(*count)++;
	if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, count);
}
int main(void) {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		int count = 0;
		cout << recursion(str, 0, str.size()-1, &count) << ' ' << count << '\n';
	}
}

