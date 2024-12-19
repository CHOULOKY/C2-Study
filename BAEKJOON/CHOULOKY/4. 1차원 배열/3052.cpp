#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[42]={0};for(int i=0;i<10;i++){
		int num;cin>>num;
		arr[num%42]=1;
	}
	cout<<count(arr,arr+42,1);
}
