// Title: N°ú M (1)
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

void pick(int n, int m, vector<int>& picked, vector<bool>& visited) {
	if(m==0) {
		for(auto iter:picked) cout << iter+1 << ' ';
		cout << '\n';
		return;
	}
	for(int i=0; i<n; i++) {
		if(visited[i]) continue;
		picked.push_back(i);
		visited[i] = true;
		pick(n, m-1, picked, visited);
		picked.pop_back();
		visited[i] = false;
	}
}
int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> picked;
	vector<bool> visited(n);
	pick(n, m, picked, visited);
}
