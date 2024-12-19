#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[31]={0};
	for(int i=0;i<28;i++){
		int num;cin>>num;
		arr[num]++;
	}
	for(int i=1;i<31;i++)if(arr[i]==0)cout<<i<<' ';
}
