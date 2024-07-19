// Title: 단어의 개수
// Solved by VICLOKY

#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
	string str; getline(cin, str, '\n');
	stringstream stream(str);
	int count = 0;
	while(stream >> str) count++;
	cout << count;
	
	return 0;
}
