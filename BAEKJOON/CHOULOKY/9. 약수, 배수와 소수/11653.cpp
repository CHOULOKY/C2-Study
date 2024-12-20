#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int a;cin>>a;
	int arr[a+1]; iota(arr,arr+a+1,0);
	arr[1]=0;

	for (int i = 2; i <= sqrt(a); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= a; j += i)
		{
			arr[j] = 0;
		}
	}
	
	int i=2;
	while(a!=1){
		if(arr[i]==0) {
			i++; continue;
		}
		
		if(a%i==0){
			cout<<i<<'\n';
			a/=i;
		}
		else i++;
	}
}

