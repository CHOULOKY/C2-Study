#include <iostream>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	int result = a*60 + b - 45;
	if(result<0) cout << 23 << ' ' << 60+result;
	else cout << result/60 << ' ' << result%60;
}
