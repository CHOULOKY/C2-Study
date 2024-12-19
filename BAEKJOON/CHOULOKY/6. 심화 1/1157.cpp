#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str;cin>>str;
	int arr[26]={0};
	for(int i=0;i<str.length();i++)arr[tolower(str[i])-'a']++;
	auto max=max_element(arr,arr+26);
	if(count(arr,arr+26,*max)>1)cout<<'?';
	else cout<<(char)(max-arr+'A');
}
