// Title: 수 정렬하기 3
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	int num, maxnum=0, b[10001]={0};
	for(int i=0; i<n; i++) {
		cin >> num;
		b[num]++;
		maxnum = max(maxnum, num);
	}
	for(int i=0; i<maxnum+1; i++) {
		if(b[i]>0) {
			for(int j=0; j<b[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}
