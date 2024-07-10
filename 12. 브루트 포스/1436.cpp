// Title: ¿µÈ­°¨µ¶ ¼ò
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int i=665;
	while(n!=0) {
		i++;
		if(to_string(i).find("666") != string::npos) n--;
	}
	cout << i;
}
