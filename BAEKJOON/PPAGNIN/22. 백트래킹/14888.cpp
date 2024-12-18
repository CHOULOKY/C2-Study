// Title: 연산자 끼워넣기
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
vector<int> oper(4);

int n, maxnum=-1e9, minnum=1e9;
void cal(int count, int result) {
	if(count == n) {
		maxnum = max(maxnum, result);
		minnum = min(minnum, result);
		return;
	}
	for(int i=0; i<4; i++) {
		if(oper[i] > 0) {
			oper[i]--;
			if(i==0) cal(count+1, result+vec[count]);
			else if(i==1) cal(count+1, result-vec[count]);
			else if(i==2) cal(count+1, result*vec[count]);
			else cal(count+1, result/vec[count]);
			oper[i]++;
		}
	}
}
int main(void) {
	cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	for(int i=0; i<4; i++) {
		int num; cin >> num;
		oper[i] = num;
	}
	cal(1, vec[0]);
	cout << maxnum << '\n' << minnum;
}
