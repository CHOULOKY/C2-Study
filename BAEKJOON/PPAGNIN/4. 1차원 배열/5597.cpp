// Title: ���� �� ���� ��..?
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> vec(31);
	for(int i=0; i<28; i++) {
		int num; cin >> num;
		vec[num]++;
	}
	for(int i=1; i<=30; i++) {
		if(vec[i]==0) cout << i << '\n';
	}
	
	return 0;
}
