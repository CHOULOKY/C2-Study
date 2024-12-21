#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 1000000

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	vector<bool> vec(MAX_SIZE, false);
	vec[1] = true;
	for(int i=2; i*i<=MAX_SIZE; i++) {
		if(vec[i]==true) continue;
		for(int j=i*i; j<=MAX_SIZE; j+=i) {
			vec[j] = true;
		}
	}
	for (int i = a; i <= b; i++) {
        if (vec[i] == false) {
            cout << i << '\n';
        }
    }
}
