#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int i,j,k,n,m;cin>>n>>m;int arr[n+1]={0};
	for(int q=0;q<m;q++){
		cin>>i>>j>>k;
		for(int p=i;p<=j;p++){
			arr[p]=k;
		}
	}
	for(int i=1;i<=n;i++)cout<<arr[i]<<' ';
}

