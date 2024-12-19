#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int count=0, n; cin>>n;
	for(int i=0;i<n;i++){
		bool isGroup=true;
		string str; cin>>str;
		int arr[26]; fill(arr, arr+26, -1);
		for(int j=0; j<str.length(); j++){
			int index = str[j]-'a';
			if(arr[index] == -1 || arr[index]-j == -1) arr[index] = j;
			else {
				isGroup=false;
				break;
			}
		}
		if(isGroup) count++;
	}
	cout<<count;
}
