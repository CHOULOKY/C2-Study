// Title: ´ÙÀÌ¾ó
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	string str; cin >> str;
	int result = 0;
	for(int i=0; i<str.size(); i++) result += a[str[i] - 'A'];
	cout << result;
	
	return 0;
}
