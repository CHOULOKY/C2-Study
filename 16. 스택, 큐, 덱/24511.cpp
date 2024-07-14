// Title: queuestack
// Solved by VICLOKY

#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int questk[n];
	for(int i=0; i<n; i++) cin >> questk[i];
	deque<int> deq;
	for(int i=0; i<n; i++) {
		int num; cin >> num;
		if(questk[i]==0) deq.push_back(num);
	}
	int m; cin >> m;
	for(int i=0; i<m; i++) {
		int num; cin >> num;
		deq.push_front(num);
		cout << deq.back() << ' ';
		deq.pop_back();
	}
}
