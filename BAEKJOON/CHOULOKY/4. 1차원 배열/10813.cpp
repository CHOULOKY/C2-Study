#include <iostream>
#include <numeric>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a,b,n,m;cin>>n>>m;
	int arr[n+1];iota(arr, arr + n+1, 0);
	for(int i=0;i<m;i++){
		cin>>a>>b;
		swap(arr[a],arr[b]);
	}
	for(int i=1;i<n+1;i++)cout<<arr[i]<<' ';
}
