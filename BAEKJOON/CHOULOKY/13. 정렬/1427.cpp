#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str; cin >> str;
	
	int arr[10]={0};
	for(int i=0; i<str.length(); i++) {
		arr[str[i]-'0']++;
	}
	
	for(int i=9; i>=0; i--) {
		while(arr[i]--) {
			cout << i;
		}
	}
}
