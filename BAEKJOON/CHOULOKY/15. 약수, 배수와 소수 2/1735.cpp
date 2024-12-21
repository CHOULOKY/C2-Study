#include <iostream>
using namespace std;

int GetGCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int GetLCM(int a, int b) {
    return a * b / GetGCD(a, b);
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b, c, d; cin >> a >> b >> c >> d;
	
	int minmul = GetLCM(b, d);
	int numerator = a * (minmul / b) + c * (minmul / d);
	
    int gcd = GetGCD(numerator, minmul);
    numerator /= gcd;
    minmul /= gcd;

    cout << numerator << ' ' << minmul;
}
