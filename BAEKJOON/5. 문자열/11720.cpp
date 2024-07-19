// Title: 숫자의 합
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; string str;
	cin >> n >> str;
	int result = 0;
	for(int i=0; i<n; i++) result += (str[i] - '0');
	cout << result;
	
	return 0;
}
