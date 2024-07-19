// Title: 숫자 카드 2
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
	cin >> m;
	for(int i=0; i<m; i++) {
		int num; cin >> num;
		cout << upper_bound(vec.begin(), vec.end(), num) - lower_bound(vec.begin(), vec.end(), num) << ' ';
	}
}
