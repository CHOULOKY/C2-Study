#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	vector<pair<int, int>> vec;
	for(int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		vec.push_back({a, b});
	}
	
	sort(vec.begin(), vec.end(), cmp);
	
	int dp[n];
	for(int i=0; i<n; i++) {
		dp[i] = 1;
		for(int j=0; j<i; j++) {
			if(vec[j].second < vec[i].second) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	
	int result=0;
	for(int i=0; i<n; i++) {
		result = max(result, dp[i]);
	}
	
	cout << n - result;
}
