// Title: �����̴� �ö󰡰� �ʹ�
// Solved by VICLOKY

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	float a,b,v; cin>>a>>b>>v;
	cout << fixed;
	cout.precision(0);
	cout << ceil((v-a)/(a-b))+1;
}
