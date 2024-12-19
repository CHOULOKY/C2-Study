#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[26];fill(arr,arr+26,-1);string str;cin>>str;
	for(int i=0;i<str.length();i++)if(arr[str[i]-'a']==-1)arr[str[i]-'a']=i;
	for(auto iter:arr)cout<<iter<<' ';
}
