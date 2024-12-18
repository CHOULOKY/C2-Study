// Title: 알고리즘 수업 - 점근적 표기 1
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
f(n) ≤ c × g(n)

a1 * n + a0 <= c * n
a0 <= (c-a1)n
1) c - a1 이 양수 (c - a1이 음수이면 부등식이 항상 성립할 수 없음, 음수인 경우 n이 커지면 좌변이 a0보다 작아짐)
2) n0 를 대입했을 때 부등식이 참 (가장 작은 n0 일 때 참이면, 모든 n 에 대해 참이 됨)
*/
