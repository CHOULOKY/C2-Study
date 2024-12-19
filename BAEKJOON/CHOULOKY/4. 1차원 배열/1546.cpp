#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
	int max=*max_element(arr,arr+n); double result=0;
	for(int i=0;i<n;i++)result+=(double)arr[i]/max*100;
	cout<<result/n;
}
