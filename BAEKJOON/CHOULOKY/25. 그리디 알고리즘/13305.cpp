#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n; cin >> n;
	
	long long distance[n-1];
	long long city[n];
	for(int i=0; i<n-1; i++) {
		cin >> distance[i];
	}
	for(int i=0; i<n; i++) {
		cin >> city[i];
	}
	
	long long result = 0;
    long long minCost = city[0];
    for (int i = 0; i < n - 1; i++) {
        if (city[i] < minCost) {
            minCost = city[i];
        }
        result += minCost * distance[i];
    }
	
	cout << result;
}
