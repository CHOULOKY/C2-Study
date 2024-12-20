#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	int arr[10001]={0};
	
	int num;
	for(int i=0; i<n; i++) {
		cin >> num;
		arr[num]++;
	}
	
	for(int i=1; i<=10000; i++) {
		if(arr[i]==0) continue;
		while(arr[i]--) {
			cout << i << '\n';
		}
	}
}
