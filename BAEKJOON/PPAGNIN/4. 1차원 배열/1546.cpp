// Title: ЦђБе
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<float> vec;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	auto maxScore = *max_element(vec.begin(), vec.end());
	float result = 0;
	for(auto iter:vec) result += (iter/maxScore*100);
	cout << result / n;
	
	return 0;
}
