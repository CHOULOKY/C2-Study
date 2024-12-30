#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	vector<pair<int, int>> vec;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		vec.push_back({b, a});
	}
	
	sort(vec.begin(), vec.end());
	
	int result = 1;
	int time = vec[0].first;
	for(int i=1; i<n; i++) {
		if(time <= vec[i].second) {
			time = vec[i].first;
			result++;
		}
	}
	
	cout << result;
}
