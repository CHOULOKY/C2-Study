// Title: ������ ���鰭���Դϴ�
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout << (c*e-b*f)/(a*e-b*d) << ' ' << (c*d-a*f)/(d*b-a*e);
}
