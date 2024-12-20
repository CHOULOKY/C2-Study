#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int i=666, n; cin >> n;
	while(n!=1){
		i += 1;
		string str = to_string(i);
		if(str.find("666")!=string::npos) {
			n--;
		}
	}
	cout << i;
}
