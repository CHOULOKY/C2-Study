// Title: °¡·Î¼ö
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int Euclidean(int a, int b) {
	if(a%b==0) return b;
	return Euclidean(b, a%b);
}
int main(void) {
	int n; cin >> n;
	vector<int> vec(n);
	for(int i=0; i<n; i++) cin >> vec[i];
	vector<int> distance(n-1);
	for(int i=0; i<n-1; i++) distance[i] = vec[i+1]-vec[i];
	int num = distance[0];
	for(int i=1; i<n-1; i++) num = Euclidean(num, distance[i]);
	int result=0;
	for(auto iter:distance) result += iter / num - 1;
	cout << result;
}
