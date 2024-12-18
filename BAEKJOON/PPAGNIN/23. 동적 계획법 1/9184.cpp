// Title: �ų��� �Լ� ����
// Solved by VICLOKY

#include <iostream>
using namespace std;

int arr[21][21][21] = {0};
int w(int a, int b, int c) {
	if(a<=0 || b<=0 || c<=0) return 1;
	if(a>20 || b>20 || c>20) return w(20, 20, 20);
	if(arr[a][b][c] != 0) return arr[a][b][c];
	if(a<b && b<c) arr[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
	else arr[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
	return arr[a][b][c];
}
int main(void) {
	int a, b, c;
	while(cin >> a >> b >> c) {
		if(a==-1 && b==-1 && c==-1) break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}
}

