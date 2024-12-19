#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[9];for(int i=0;i<9;i++)cin>>arr[i];
	auto max=max_element(arr,arr+9);cout<<*max<<'\n'<<max-arr+1;
}
