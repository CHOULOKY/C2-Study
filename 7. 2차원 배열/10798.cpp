// Title: 세로읽기
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	string str[5];
	for(int i=0; i<5; i++) cin >> str[i];
	int pos=0, count;
	while(count<5) {
		count=0;
		for(int i=0; i<5; i++) {
			if(str[i].size()<pos+1) {
				count++; continue;
			}
			cout << str[i][pos];
		}
		pos++;
	}
	
	return 0;
}
