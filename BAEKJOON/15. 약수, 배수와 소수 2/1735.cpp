// Title: ºÐ¼ö ÇÕ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int Euclidean(int a, int b) {
	if(a%b == 0) return b;
	return Euclidean(b, a%b);
}
int main(void) {
	int a1, a2; cin >> a1 >> a2;
	int b1, b2; cin >> b1 >> b2;
	int max = Euclidean(a2, b2);
	int min = (a2*b2) / max;
	int child = a1*(min/a2) + b1*(min/b2);
	int parent = min;
	int afterMax = Euclidean(child, parent);
	cout << child/afterMax << ' ' << parent/afterMax;
}
