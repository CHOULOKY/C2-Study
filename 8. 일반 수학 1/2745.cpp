// Title: 진법 변환
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	string str; int num;
	cin >> str >> num;
	int result=0, square=0, temp;
	for(int i=str.size()-1; i>=0; i--) {
		if(str[i]-'A'>=0 && str[i]-'A'<=25) temp=str[i]-'A'+10;
		else temp=str[i]-'0';
		result += pow(num, square) * temp;
		square++;
	}
	cout << result;
	
	return 0;
}
