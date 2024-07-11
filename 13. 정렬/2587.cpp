// Title: ´ëÇ¥°ª2
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int result=0;
	vector<int> vec;
	for(int i=0; i<5; i++) {
		int num; cin >> num;
		result+=num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	cout<<result/5 <<'\n' <<vec[2];
}
