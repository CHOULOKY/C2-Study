// Title: ºÐÇØÇÕ
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n; cin>>n;
	for(int i=1; i<n; i++) {
		int temp=i, sum=0;
		while(temp!=0) {
			sum+=temp%10;
			temp/=10;
		}
		if(sum+i==n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}

