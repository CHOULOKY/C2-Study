// Title: °ö¼À

#include <iostream>
using namespace std;

int main(void) {
	int a; string b;
	cin >> a >> b;
	cout << a * (b[2] - '0') << '\n';
	cout << a * (b[1] - '0') << '\n';
	cout << a * stoi(string(1, b[0])) << '\n';
	cout << a * stoi(b);
}

