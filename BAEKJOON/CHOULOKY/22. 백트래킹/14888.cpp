#include <iostream>
#include <vector>
using namespace std;

int n, maxn=-1e9, minn=1e9;
vector<int> vec;
int oper[4];

void cal(int result, int index) {
	if(index == vec.size()) {
		maxn = max(maxn, result);
		minn = min(minn, result);
	}
	
	int a = result, b = vec[index];
	for(int i=0; i<4; i++) {
		if(oper[i] > 0) {
			oper[i]--;
			if(i==0) {
				cal(a+b, index+1);
			}
			else if(i==1) {
				cal(a-b, index+1);
			}
			else if(i==2) {
				cal(a*b, index+1);
			}
			else if(i==3) {
				cal(a/b, index+1);
			}
			oper[i]++;
		}
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		vec.push_back(num);
	}
	for(int i=0; i<4; i++) {
		cin >> oper[i];
	}
	
	cal(vec[0], 1);
	
	cout << maxn << '\n' << minn;
}
