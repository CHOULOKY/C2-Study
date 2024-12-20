#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int result, num;
		result=num=i;
		while(num!=0){
			result+=num%10;
			num/=10;
		}
		if(result==n){
			cout<<i; return 0;
		}
	}
	cout<<0;
}
