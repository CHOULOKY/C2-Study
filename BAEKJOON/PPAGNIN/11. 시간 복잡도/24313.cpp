// Title: �˰��� ���� - ������ ǥ�� 1
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	bool result = a0 <= (c-a1)*n0 && c >= a1;
	cout << result;
}
/*
f(n) = a1n + a0
f(n) �� c �� g(n)

a1 * n + a0 <= c * n
a0 <= (c-a1)n
1) c - a1 �� ��� (c - a1�� �����̸� �ε���� �׻� ������ �� ����, ������ ��� n�� Ŀ���� �º��� a0���� �۾���)
2) n0 �� �������� �� �ε���� �� (���� ���� n0 �� �� ���̸�, ��� n �� ���� ���� ��)
*/
