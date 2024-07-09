// Title: 진법 변환 2
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int num, notation;
	cin >> num >> notation;
	vector<int> vec;
	while(num != 0) {
		vec.push_back(num % notation);
		num /= notation;
	}
	string result="";
	for(auto iter:vec) {
		if(iter<10) result += to_string(iter);
		else result += (char)(iter+55);
	}
	reverse(result.begin(), result.end());
	cout << result;
	
	return 0;
}
