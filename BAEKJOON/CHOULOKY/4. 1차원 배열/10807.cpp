#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;int arr[n];for(int i=0;i<n;i++){cin>>arr[i];
	}cin>>n;cout<<count(arr, arr+sizeof(arr)/sizeof(arr[0]), n);
}
