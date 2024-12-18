#include <iostream>
using namespace std;

int main(void) {
	int a; string b; cin >> a >> b;
	cout << a * (b[2]-'0') << '\n' << a*(b[1]-'0') << '\n' << a*(b[0]-'0') << '\n' << a * stoi(b);
}
