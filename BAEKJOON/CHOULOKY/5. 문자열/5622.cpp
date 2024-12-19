#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int arr[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	string str;cin>>str;int result=0;for(int i=0;i<str.length();i++)result+=arr[str[i]-'A'];
	cout<<result;
}
