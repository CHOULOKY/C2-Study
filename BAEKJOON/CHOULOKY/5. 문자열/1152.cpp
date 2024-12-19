#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str;getline(cin, str);
	stringstream stream(str);
	int count=0;
	while(stream >> str)count++;
	cout<<count;
}
