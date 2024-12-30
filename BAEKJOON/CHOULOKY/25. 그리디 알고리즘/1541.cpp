#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	string str; cin >> str;
	stringstream stream(str);
	
	int num;
	int result = 0;
	bool isMinus = false;
	while(stream >> num) {
		if(num < 0) isMinus = true;
		if(isMinus) {
			if(num >= 0) result -= num;
			else result += num;
		}
		else result += num;
	}
	cout << result;
}
