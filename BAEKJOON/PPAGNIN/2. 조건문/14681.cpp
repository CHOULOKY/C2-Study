// Title: ��и� ����
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	if(a>0 && b>0) cout<<1;
	else if(a<0 && b>0) cout << 2;
	else if(a<0 && b<0) cout << 3;
	else if(a>0 && b<0) cout << 4;
	
	return 0;
}

