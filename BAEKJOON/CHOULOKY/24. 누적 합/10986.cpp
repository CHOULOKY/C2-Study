#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n, m; cin >> n >> m;
	long long sum = 0;
	long long mod[m] = {0};
	for(int i=1; i<=n; i++) {
		int num; cin >> num;
		mod[(sum += num) % m]++;
	}
	
	long long result = 0;
	for(int i=0; i<m; i++) {
		if(i==0) result += mod[i] * (mod[i]+1) / 2;
		else result += mod[i] * (mod[i]-1) / 2;
	}
	cout << result;
}
