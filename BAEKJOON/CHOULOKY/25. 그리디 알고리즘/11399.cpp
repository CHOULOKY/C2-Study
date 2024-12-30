#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	int arr[n+1] = {0};
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	
	sort(arr+1, arr+n+1);
	
	int result = 0;
	for(int i=1; i<=n; i++) {
		arr[i] += arr[i-1];
		result += arr[i];
	}
	cout << result;
}
