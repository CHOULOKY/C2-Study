#include <iostream>
using namespace std;

int main(void) {
	int a,b,c; cin>>a>>b>>c;
	int result = (a*60+b+c)%1440;
	cout << result/60 << ' ' << result%60;
}
