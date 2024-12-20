#include <iostream>
#include <cmath>
using namespace std;

bool IsSosu(int num){
	if(num<2) return false;
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0)return false;
	}
	return true;
}
int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n; int count=0;
	for(int i=0;i<n;i++){
		int num;cin>>num;
		if(IsSosu(num)) count++;
	}
	cout<<count;
}

