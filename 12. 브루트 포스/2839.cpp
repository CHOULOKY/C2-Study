// Title: º≥≈¡ πË¥ﬁ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int count=0;
	while(n>=0) {
		if(n%5==0) {
			count += n/5;
			cout << count;
			return 0;
		}
		n -= 3;
		count++;
	}
	cout << -1;
	
	/*
	int n; cin >> n;
	int result=5000;
	for(int i=0; i<=n/5; i++) {
		for(int j=0; j<=n/3; j++) {
			if(i*5 + j*3 == n) result = min(result, i+j);
		}
	}
	if(result==5000) cout<<-1;
	else cout<<result;
	*/
}
