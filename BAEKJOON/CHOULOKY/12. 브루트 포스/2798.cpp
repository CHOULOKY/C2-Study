#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b;cin>>a>>b;
	int arr[a];
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	int result=0;
	for(int i=0;i<a-2;i++){
		for(int j=i+1;j<a-1;j++){
			for(int k=j+1;k<a;k++){
				if(arr[i]+arr[j]+arr[k]<=b){
					result=max(result,arr[i]+arr[j]+arr[k]);
				}
			}
		}
	}
	cout<<result;
}
