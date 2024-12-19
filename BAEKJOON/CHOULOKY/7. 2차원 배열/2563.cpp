#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[100][100]={0};
	int n;cin>>n;for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		for(int x=0; x<10;x++)
		for(int y=0;y<10;y++)
		arr[a+x][b+y]=1;
	}
	int count=0;
	for(int i=0;i<100;i++)
	for(int j=0;j<100;j++)
	if(arr[i][j]==1)count++;
	cout<<count;
}

