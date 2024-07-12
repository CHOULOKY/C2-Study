// Title: 숫자 카드
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int num, int* a, int n) {
	int left, mid, right;
	left = 0; right = n-1;
	while(left <= right) {
		mid = (left + right)/2;
		if(a[mid]==num) return true;
		else if(a[mid]>num) {
			right = mid-1;
		}
		else if(a[mid]<num) {
			left = mid+1;
		}
	}
	return false;
}
int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	cin >> m;
	for(int i=0; i<m; i++) {
		int num; cin >> num;
		cout << binary_search(num, a, n) << ' ';
	}
}

